/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00404f90; name: FUN_.text__00404f90
 */


ulong FUN__text__00404f90(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 local_28;
  
  iVar4 = (int)param_1;
  FUN__text__00404130(param_1,param_2,0);
  local_28 = 0;
  lVar1 = (long)iVar4 * 0x638;
  uVar10 = (&DAT_00ae8a40)[(long)iVar4 * 199];
  uVar6 = param_3 + 0x80U >> (*(ulong *)(&DAT_00ae8a30 + lVar1) & 0x3f);
  if ((*(long *)(&DAT_00ae8a28 + lVar1) - 1U & param_3 + 0x80U) != 0) {
    uVar6 = uVar6 + 1;
  }
  uVar7 = uVar6 * *(long *)(&DAT_00ae8a28 + lVar1);
  uVar8 = 0;
  if (uVar10 <= uVar7) {
    if (uVar10 <= *(ulong *)(&DAT_00ae8a38 + (long)iVar4 * 0x638)) {
      uVar10 = 0;
    }
    uVar8 = uVar10;
  }
  lVar1 = uVar8 + uVar7;
  do {
    uVar7 = DAT_00ae89d0;
    uVar10 = DAT_00ae89d0 + lVar1;
    if (DAT_00ae89c8 != 0 && DAT_00ae89c8 < uVar10) {
      return 0;
    }
    while (DAT_00ae89d0 == uVar7) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0xae89d0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_00ae89d0 = uVar10;
      }
      if (cVar2 == '\0') {
        uVar10 = (**(code **)(&DAT_00ae89e0 + (long)iVar4 * 0x638))(lVar1,&local_28);
        uVar5 = 0;
        if ((uVar8 != 0) && (uVar10 != 0)) {
          uVar8 = uVar8 - (uVar10 & (*(ulong *)(&DAT_00ae8a50 + (long)iVar4 * 0x638) ^
                                    0xffffffffffffffff));
          uVar10 = uVar10 + uVar8;
          uVar5 = (undefined4)(uVar8 >> 3);
        }
        if (uVar10 != 0) {
          *(undefined4 *)(uVar10 + 0x3c) = uVar5;
          *(undefined4 *)(uVar10 + 0xc) = 0xffffffff;
          *(int *)(uVar10 + 0x2c) = (int)uVar6;
          *(long *)(uVar10 + 0x40) = param_2;
          *(undefined8 *)(uVar10 + 0x58) = local_28;
          uVar9 = 0;
          if (*(long *)(param_2 + 0x3110) != 0) {
            *(ulong *)(*(long *)(param_2 + 0x3110) + 0x50) = uVar10;
            uVar9 = *(undefined8 *)(param_2 + 0x3110);
          }
          *(undefined8 *)(uVar10 + 0x48) = uVar9;
          *(ulong *)(param_2 + 0x3110) = uVar10;
          uVar10 = uVar10 + 0x80;
          *(long *)(param_2 + 0xce8) = *(long *)(param_2 + 0xce8) + 1;
        }
        return uVar10;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


