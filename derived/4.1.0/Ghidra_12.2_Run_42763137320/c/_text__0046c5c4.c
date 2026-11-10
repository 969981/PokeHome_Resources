/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046c5c4; name: FUN_.text__0046c5c4
 */


void FUN__text__0046c5c4(long param_1,undefined4 *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (*(char *)((long)param_2 + 0xd) == '\x04') {
    if (((param_2[2] == 7) || (param_2[2] == 0)) &&
       (uVar2 = FUN__text__0046d6c0(*param_2), (uVar2 & 1) != 0)) {
      return;
    }
  }
  iVar1 = FUN__text__00432b54(param_1 + 0x58,param_2);
  if (iVar1 == 1) {
    FUN__text__00433670(param_1,(ulong)CONCAT14(*(undefined1 *)((long)param_2 + 0xd),*param_2));
    return;
  }
  return;
}


