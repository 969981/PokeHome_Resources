/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046c63c; name: FUN_.text__0046c63c
 */


void FUN__text__0046c63c(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  char local_24 [4];
  
  local_24[0] = '\x01';
  uVar1 = FUN__text__00432ba0(param_1 + 0x58,param_2,local_24);
  if (((uVar1 & 1) != 0) && (local_24[0] == '\0')) {
    FUN__text__00433930(param_1,(ulong)CONCAT14(*(undefined1 *)((long)param_2 + 0xd),*param_2));
  }
  return;
}


