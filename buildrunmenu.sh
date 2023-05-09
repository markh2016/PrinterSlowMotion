#!/bin/bash

# Check for Kate installation

clear

if ! command -v kate &> /dev/null
then
    echo -e "\e[31mKate is not installed. Please install Kate and try again.\e[0m"
    exit 1
fi

# Print header
echo "***************************************************"
echo -e "\e[33m\e[1m        Menu Script by Mark Harrington        \e[0m"
echo -e "\e[34m\e[1m             $(date +"%A, %B %d %Y %r")             \e[0m"
echo "***************************************************"

# Display the main menu
while true; do
 
  echo -e "\e[33mChoose an option:\e[0m"
  echo -e "\e[34m1: \e[0m\e[32mCreate build files\e[0m"
  echo -e "\e[34m2: \e[0m\e[32mBuild executable\e[0m"
  echo -e "\e[34m3: \e[0m\e[32mRemake executable\e[0m"
  echo -e "\e[34m4: \e[0m\e[32mRun exe\e[0m"
  echo -e "\e[34m5: \e[0m\e[32mEdit check.txt\e[0m"
  echo -e "\e[34m6: \e[0m\e[32mExit\e[0m"  # added exit command
  read -r choice

  case "$choice" in
    1)
      # Run the CMake command to create build files
      cmake -S . -B build_files
      ;;
    2)
      # Build the executable using the existing build files
      cd build_files
      make
      cd ..
      ;;
    3)
      # Clean the build directory and rebuild the executable
      cd build_files
      make clean
      make
      cd ..
      ;;
    4)
      # Change to the dist directory and run the PrintWriter executable
      cd dist
      ./PrintWriter
      cd ..
      ;;
    5)
      # Change to the dist directory and open check.txt using Kate
      if $KATE_INSTALLED; then
		  cd dist
          kate check.txt
      else
          echo -e "\e[31mKate is not installed. Please install it to use this option.\e[0m"
      cd .. 
      fi
      ;;
    6)
      # Exit command added
      clear 
      exit
      ;;
    *)
      # Invalid option, display an error message and show the main menu again
      echo -e "\e[31mInvalid choice, please try again.\e[0m"
      ;;
  esac
done
