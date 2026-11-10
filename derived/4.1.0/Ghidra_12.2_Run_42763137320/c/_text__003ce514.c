/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ce514; name: FUN_.text__003ce514
 */


void FUN__text__003ce514(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN__text__003e9680(param_1[0x18],0x720314);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,0);
  FUN__text__003c4b88(0,param_1,uVar1,1,1);
  if ((char)param_1[0x19] != '\0') {
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,6);
    FUN__text__003c4b88(0,param_1,uVar1,1,1);
  }
  *(undefined1 *)((long)param_1 + 900) = 0;
  return;
}


