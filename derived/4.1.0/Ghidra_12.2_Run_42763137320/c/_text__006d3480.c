/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d3480; name: FUN_.text__006d3480
 */


void FUN__text__006d3480(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                        undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  long *plVar3;
  
  param_1[2] = 0x100000001;
  *param_1 = 0;
  param_1[1] = 0;
  FUN__text__006cdd78(param_1 + 4);
  FUN__text__006cb570(param_1 + 0x20);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  piVar1 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
  if (param_2[0x21] != 0) {
    param_1[0x21] = param_2[0x21];
    uVar2 = FUN__text__006a0f04();
    param_1[0x20] = uVar2;
    param_1[0x22] = uVar2;
  }
  do {
    if (piVar1 == (int *)0x0) {
LAB__text__006d3590:
      memcpy(param_1 + 4,param_2 + 4,0xd4);
      return;
    }
    if (*piVar1 == 0x50434756) {
      plVar3 = (long *)param_1[0x22];
      param_1[0x22] = plVar3 + 0x14;
      if (plVar3 != (long *)0x0) {
        FUN__text__006ced00(plVar3,0,0,param_1 + 0x20);
      }
      param_1[1] = plVar3;
      (**(code **)(*plVar3 + 0x10))
                (plVar3,param_3,param_4,*(undefined4 *)(param_1 + 2),
                 *(undefined4 *)((long)param_1 + 0x14));
      FUN__text__006d35c0(param_1,param_3,param_4,param_1[1],piVar1,*(undefined4 *)(param_1 + 2),
                          *(undefined4 *)((long)param_1 + 0x14));
      goto LAB__text__006d3590;
    }
    piVar1 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
  } while( true );
}


