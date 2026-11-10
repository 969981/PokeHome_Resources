/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00227170; name: FUN_.text__00227170
 */


void FUN__text__00227170(long param_1,int param_2)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_38 [3];
  
  *(int *)(param_1 + 0x6e4) = param_2;
  *(int *)(param_1 + 0x6e8) = param_2 % 10;
  *(int *)(param_1 + 0x6ec) = (param_2 / 10) % 10;
  *(int *)(param_1 + 0x6f0) = (param_2 / 100) % 10;
  *(int *)(param_1 + 0x6f4) = (param_2 / 1000) % 10;
  *(int *)(param_1 + 0x6f8) = (param_2 / 10000) % 10;
  sVar1 = (short)(param_2 / 100000);
  *(int *)(param_1 + 0x6fc) =
       (int)(short)(sVar1 + ((short)((uint)(sVar1 * 0x6667 >> 0x10) >> 2) - (sVar1 >> 0xf)) * -10);
  FUN__text__00226c80();
  uVar2 = *(undefined8 *)(param_1 + 0x6c8);
  *(int *)(param_1 + 0x6d8) = (int)(*(float *)(param_1 + 0x6dc) * (float)*(int *)(param_1 + 0x6e4));
  local_38[0] = 0xa57dd92620c93b68;
  lVar3 = *(long *)(*(long *)(param_1 + 0x6c0) + 0x2e8);
  if (lVar3 == 0) {
    FUN__text__005f2d98(uVar2,local_38,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x6c0) + 0x2e0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN__text__005f2d98(uVar2,local_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x6c0) + 0x2e0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar3,0,*(undefined4 *)(param_1 + 0x6d8),7,0,1);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN__text__003c8c20(*(undefined8 *)(param_1 + 0x6c0),0x729590,0xb);
  return;
}


