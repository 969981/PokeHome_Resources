/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068d634; name: FUN_.text__0068d634
 */


uint FUN__text__0068d634(undefined8 *param_1)

{
  char *local_28;
  char local_8 [4];
  uint local_4;
  
  local_28 = (char *)*param_1;
  local_8[0] = '\0';
  local_8[1] = '\0';
  local_8[2] = '\0';
  local_8[3] = '\0';
  nn::util::PickOutCharacterFromUtf8String(local_8,&local_28);
  local_4 = 0;
  *param_1 = local_28;
  nn::util::ConvertCharacterUtf8ToUtf32(&local_4,local_8);
  return local_4;
}


