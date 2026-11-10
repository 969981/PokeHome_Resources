/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005343e8; name: FUN_.text__005343e8
 */


void FUN__text__005343e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = FUN__text__0050c2a0(param_2,*(undefined8 *)
                                       (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x38) +
                                       0x68));
  if (lVar1 == 0) {
    return;
  }
  uVar2 = FUN__text__0050c2e0(param_2,**(undefined8 **)(param_1 + 0x30));
  uVar3 = FUN__text__00532f00(*(undefined8 *)(param_1 + 0x38),lVar1,*(undefined8 *)(param_1 + 0x30),
                              uVar2);
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x28) = 4;
    FUN__text__00529fa0(param_1);
  }
  FUN__text__0052c540(*(long *)(param_1 + 0x30) + 8,uVar2,0);
  return;
}


