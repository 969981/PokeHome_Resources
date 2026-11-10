/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cc3a0; name: FUN_.text__005cc3a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cc3a0(long *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  int iVar13;
  undefined8 local_c0 [8];
  
  piVar2 = _DAT_008a0300;
  uVar7 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar7 != 0) && ((int)param_1[0x3f] != 0)) {
    uVar9 = 0;
    uVar8 = 1;
    do {
      if (uVar8 != 0) {
        uVar7 = 0;
        do {
          local_c0[6] = 0;
          local_c0[7] = 0;
          local_c0[4] = 0;
          local_c0[5] = 0;
          local_c0[2] = 0;
          local_c0[3] = 0;
          *(uint *)(param_1 + 0x40) = uVar7 + (int)param_1[0x3e];
          *(uint *)((long)param_1 + 0x204) = *(int *)((long)param_1 + 500) + uVar9;
          local_c0[0] = 0;
          local_c0[1] = 0;
          if ((long *)param_1[0x16] == (long *)0x0) {
            uVar10 = 0;
            plVar5 = (long *)param_1[0x18];
          }
          else {
            local_c0[0] = (**(code **)(*(long *)param_1[0x16] + 0x38))();
            if ((char)param_1[0x17] != '\0') {
              FUN__text__006eda8c(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,local_c0[0]
                                  ,param_1[0x16] + 0x98,0);
            }
            uVar10 = 1;
            plVar5 = (long *)param_1[0x18];
          }
          if (plVar5 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar5 + 0x38))
                              (plVar5,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            lVar11 = param_1[0x19];
            local_c0[uVar10] = uVar6;
            if ((char)lVar11 != '\0') {
              FUN__text__006eda8c(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,uVar6,
                                  param_1[0x18] + 0x98,0);
            }
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          plVar5 = (long *)param_1[0x1a];
          if (plVar5 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar5 + 0x38))
                              (plVar5,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            lVar11 = param_1[0x1b];
            local_c0[uVar10] = uVar6;
            if ((char)lVar11 != '\0') {
              FUN__text__006eda8c(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,uVar6,
                                  param_1[0x1a] + 0x98,0);
            }
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          plVar5 = (long *)param_1[0x1c];
          if (plVar5 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar5 + 0x38))
                              (plVar5,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            lVar11 = param_1[0x1d];
            local_c0[uVar10] = uVar6;
            if ((char)lVar11 != '\0') {
              FUN__text__006eda8c(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,uVar6,
                                  param_1[0x1c] + 0x98,0);
            }
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          plVar5 = (long *)param_1[0x1e];
          if (plVar5 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar5 + 0x38))
                              (plVar5,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            lVar11 = param_1[0x1f];
            local_c0[uVar10] = uVar6;
            if ((char)lVar11 != '\0') {
              FUN__text__006eda8c(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,uVar6,
                                  param_1[0x1e] + 0x98,0);
            }
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          plVar5 = (long *)param_1[0x20];
          if (plVar5 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar5 + 0x38))
                              (plVar5,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            lVar11 = param_1[0x21];
            local_c0[uVar10] = uVar6;
            if ((char)lVar11 != '\0') {
              FUN__text__006eda8c(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,uVar6,
                                  param_1[0x20] + 0x98,0);
            }
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          plVar5 = (long *)param_1[0x22];
          if (plVar5 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar5 + 0x38))
                              (plVar5,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            lVar11 = param_1[0x23];
            local_c0[uVar10] = uVar6;
            if ((char)lVar11 != '\0') {
              FUN__text__006eda8c(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,uVar6,
                                  param_1[0x22] + 0x98,0);
            }
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          plVar5 = (long *)param_1[0x24];
          if (plVar5 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar5 + 0x38))
                              (plVar5,(int)param_1[0x40],*(undefined4 *)((long)param_1 + 0x204));
            lVar11 = param_1[0x25];
            local_c0[uVar10] = uVar6;
            if ((char)lVar11 != '\0') {
              FUN__text__006eda8c(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,uVar6,
                                  param_1[0x24] + 0x98,0);
            }
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          lVar11 = param_1[0x26];
          if ((lVar11 != 0) || (lVar11 = param_1[0x16], lVar11 != 0)) {
            fVar12 = 1.0;
            if ((char)param_1[0x41] != '\0') {
              fVar12 = *(float *)(*_DAT_0089f5b8 + 0x85a4);
            }
            iVar1 = *(int *)(*_DAT_0089f5b8 + 0x859c);
            iVar3 = FUN__text__005cd528(lVar11,iVar1);
            iVar13 = (int)(fVar12 * (float)iVar3);
            iVar4 = FUN__text__005cd59c(lVar11,iVar1);
            *(int *)(param_1 + 0x2c) = iVar13;
            *(int *)(param_1 + 0x32) = (int)(fVar12 * (float)iVar3);
            iVar3 = (int)(fVar12 * (float)iVar4);
            *(int *)((long)param_1 + 0x164) = iVar3;
            *(int *)((long)param_1 + 0x194) = (int)(fVar12 * (float)iVar4);
            *(int *)(param_1 + (long)iVar1 * 2 + 0x37) = iVar13;
            *(int *)((long)param_1 + (long)iVar1 * 0x10 + 0x1bc) = iVar3;
          }
          FUN__text__006edf20(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,0,1,
                              param_1 + 0x2b);
          FUN__text__006ee050(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,0,1,
                              param_1 + 0x31);
          if (param_1[0x26] == 0) {
            lVar11 = 0;
            if ((int)uVar10 != 0) goto LAB__text__005cc430;
LAB__text__005cc898:
            if (lVar11 != 0) {
              FUN__text__006ed080(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,0,0,lVar11)
              ;
            }
            uVar8 = 0;
          }
          else {
            lVar11 = FUN__text__005a78d8(param_1[0x26],uVar7,uVar9);
            if ((lVar11 != 0) && (*(char *)((long)param_1 + 0x1ac) != '\0')) {
              FUN__text__006edc94(*(undefined4 *)(param_1[0x26] + 0x580),
                                  *(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,lVar11,
                                  *(undefined4 *)(param_1[0x26] + 0x584),3,0);
            }
            if ((int)uVar10 == 0) goto LAB__text__005cc898;
LAB__text__005cc430:
            FUN__text__006ed080(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,uVar10,
                                local_c0,lVar11);
            uVar8 = 0x80;
          }
          (**(code **)(*param_1 + 0x80))(param_1);
          if (lVar11 != 0) {
            uVar8 = uVar8 | 0x100;
          }
          FUN__text__006eddd4(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,uVar8);
          FUN__text__006eddfc(*(long *)(param_1[0xc] + 0x58) + (long)*piVar2 * 0x168,0x20);
          uVar8 = *(uint *)(param_1 + 0x3f);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
        uVar7 = *(uint *)((long)param_1 + 0x1fc);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  return;
}


