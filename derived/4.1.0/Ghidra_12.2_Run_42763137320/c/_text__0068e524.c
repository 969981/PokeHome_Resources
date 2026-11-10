/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068e524; name: FUN_.text__0068e524
 */


char * FUN__text__0068e524(undefined8 param_1,undefined1 *param_2,char *param_3)

{
  char local_24 [4];
  char *local_8;
  
  local_24[0] = '\0';
  local_24[1] = '\0';
  local_24[2] = '\0';
  local_24[3] = '\0';
  local_8 = param_3;
  nn::util::PickOutCharacterFromUtf8String(local_24,&local_8);
  *param_2 = 1;
  return local_8;
}


