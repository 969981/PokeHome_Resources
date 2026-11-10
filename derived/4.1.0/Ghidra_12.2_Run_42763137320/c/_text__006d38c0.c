/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d38c0; name: FUN_.text__006d38c0
 */


undefined8
FUN__text__006d38c0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                   long param_6,int param_7,int param_8)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_44;
  
  piVar1 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar1 == 0x50434756) {
        lVar2 = FUN__text__006d3aa0(param_6);
        if (lVar2 + 0xe0 != 0) {
          param_1[0x21] = lVar2 + 0xe0;
          lVar2 = FUN__text__006a0f04();
          param_1[0x20] = lVar2;
          param_1[0x22] = lVar2;
        }
        break;
      }
      piVar1 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
    } while (piVar1 != (int *)0x0);
  }
  *param_1 = param_6;
  if (param_7 < 1) {
    *(int *)(param_1 + 2) = (int)*(float *)(param_6 + 0x20);
  }
  else {
    *(int *)(param_1 + 2) = param_7;
  }
  if (param_8 < 1) {
    *(int *)((long)param_1 + 0x14) = (int)*(float *)(param_6 + 0x24);
    piVar1 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
  }
  else {
    *(int *)((long)param_1 + 0x14) = param_8;
    piVar1 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
  }
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar1 == 0x50434756) {
        plVar4 = (long *)param_1[0x22];
        param_1[0x22] = (long)(plVar4 + 0x14);
        if (plVar4 != (long *)0x0) {
          FUN__text__006ced00(plVar4,0,0,param_1 + 0x20);
        }
        param_1[1] = (long)plVar4;
        (**(code **)(*plVar4 + 0x10))
                  (plVar4,param_3,param_4,(int)param_1[2],*(undefined4 *)((long)param_1 + 0x14));
        lVar2 = FUN__text__006d35c0(param_1,param_3,param_4,param_1[1],piVar1,(int)param_1[2],
                                    *(undefined4 *)((long)param_1 + 0x14));
        if (param_2 != (long *)0x0) {
          *param_2 = *param_2 + lVar2;
        }
        break;
      }
      piVar1 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
    } while (piVar1 != (int *)0x0);
  }
  local_44 = 0;
  uVar3 = (**(code **)(*param_5 + 0x90))(param_5,param_3,0x52475456,1,&local_44);
  FUN__text__006cddd0(param_1 + 4,uVar3);
  return 1;
}


