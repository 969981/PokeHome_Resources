/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a9624; name: FUN_.text__003a9624
 */


undefined8 FUN__text__003a9624(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40 [3];
  long local_28;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(long *)(param_1 + 0x408) + 8);
    local_40[0] = *(undefined8 *)(*(long *)(param_1 + 0x3e0) + 0x88);
    (**(code **)(**(long **)(param_1 + 0x98) + 0xd0))
              (*(long **)(param_1 + 0x98),param_1 + 0x3d8,local_40);
    *(undefined1 *)(param_1 + 0x85) = 0;
    FUN__text__003a1648(param_1,1);
    FUN__text__003a9034(param_1);
    FUN__text__005e927c(local_40,0x8820c0);
    FUN__text__003c1e4c(local_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    return 1;
  }
  if (*(int *)(*(long *)(param_1 + 0x3d0) + 0x60) != 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x400);
  iVar4 = *(int *)(param_1 + 0x404);
  lVar1 = *(long *)(param_1 + 0x3b8);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x3e0) + 0x88);
  *(undefined1 *)(lVar1 + 0x149) = 1;
  *(undefined8 *)(lVar1 + 0x150) = uVar2;
  *(undefined8 *)(lVar1 + 0x168) = 0;
  *(ulong *)(lVar1 + 0x160) = CONCAT44((float)iVar4,(float)iVar3);
  if ((*(long *)(lVar1 + 0xb8) != -0x340d631b7bddd9bb) && (*(long *)(lVar1 + 0xb8) != 0)) {
    (**(code **)(**(long **)(lVar1 + 0x98) + 0x78))();
  }
  *(undefined1 *)(param_1 + 0x85) = 1;
  FUN__text__003a1648(param_1,0);
  return 1;
}


