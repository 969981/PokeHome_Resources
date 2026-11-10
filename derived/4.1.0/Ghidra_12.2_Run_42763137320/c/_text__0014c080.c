/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014c080; name: FUN_.text__0014c080
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014c080(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  long local_48;
  float local_40;
  float local_3c;
  float local_38 [2];
  
  if (*(int *)(*(long *)(param_1 + 0x60) + 0x78) == -1) {
    if (*(long *)(param_1 + 0x188) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(*(long *)(param_1 + 0x188) + 0x78) == -1;
    }
    fVar5 = *(float *)(*_DAT_0089f5b8 + 0x85a4);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x1a0) + 0x58))();
    if ((uVar3 & 1) != 0) {
      local_38[1] = 0.0;
      FUN__text__005bea28(*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0xb0),local_38 + 1);
      local_38[1] = 0.0;
      lVar4 = *(long *)(param_1 + 0x1b0);
      iVar2 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0x1c8));
      local_38[0] = (1.0 - fVar5) * (float)iVar2;
      iVar2 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0x1c0));
      local_3c = fVar5 * (float)iVar2;
      iVar2 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0x1c0));
      local_40 = fVar5 * (float)iVar2;
      FUN__text__005bfdc4(*(undefined8 *)(lVar4 + 0xb0),local_38 + 1,local_38,&local_3c,&local_40);
    }
    if ((bVar1) && (uVar3 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x58))(), (uVar3 & 1) != 0))
    {
      local_38[1] = 0.0;
      FUN__text__005bea28(*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0xb0),local_38 + 1);
      local_38[1] = 0.0;
      lVar4 = *(long *)(param_1 + 0x1b8);
      iVar2 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0x1c8));
      local_38[0] = (1.0 - fVar5) * (float)iVar2;
      iVar2 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0x1c8));
      local_3c = fVar5 * (float)iVar2;
      iVar2 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0x1c8));
      local_40 = fVar5 * (float)iVar2;
      FUN__text__005bfdc4(*(undefined8 *)(lVar4 + 0xb0),local_38 + 1,local_38,&local_3c,&local_40);
    }
    local_48 = *(long *)(param_1 + 0x1d0);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN__text__00152a60(param_1 + 0x1d8,&local_48,0);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return;
}


