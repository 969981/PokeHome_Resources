/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a5140; name: FUN_.text__004a5140
 */


int FUN__text__004a5140(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  float fVar13;
  undefined1 auStack_74 [4];
  byte local_70 [4];
  uint local_6c;
  undefined1 auStack_68 [4];
  uint local_64;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 8;
    do {
      iVar5 = FUN__text__004aecec(lVar1,auStack_68,8);
      if (iVar5 != 1) {
        return iVar5;
      }
      param_2 = param_2 + -8;
      if (local_64 != 0) {
        uVar11 = 0;
        do {
          while( true ) {
            iVar5 = FUN__text__004aecec(lVar1,&local_6c,4);
            if (iVar5 != 1) {
              return iVar5;
            }
            iVar5 = FUN__text__004aecec(lVar1,local_70,1);
            if (iVar5 != 1) {
              return iVar5;
            }
            uVar2 = *(uint *)(param_1 + 0xd0);
            if (uVar2 == 0) break;
            uVar7 = 0;
            if (uVar2 != 0) {
              uVar7 = local_6c / uVar2;
            }
            plVar9 = (long *)(*(long *)(param_1 + 200) + (ulong)(local_6c - uVar7 * uVar2) * 8);
            do {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB__text__004a5254;
            } while (*(uint *)(plVar9 + 1) != local_6c);
            FUN__text__004ae7a0(lVar1,local_70[0],auStack_74);
            uVar11 = uVar11 + 1;
            param_2 = (param_2 + -5) - (uint)local_70[0];
            if (local_64 <= uVar11) goto LAB__text__004a5380;
          }
LAB__text__004a5254:
          lVar6 = FUN__text__00400f80(0,(ulong)local_70[0] + 5);
          if (lVar6 == 0) {
            return 0x34;
          }
          *(undefined1 *)(lVar6 + (ulong)local_70[0]) = 0x2e;
          *(undefined1 *)((ulong)local_70[0] + lVar6 + 1) = 0x62;
          *(undefined1 *)((ulong)local_70[0] + lVar6 + 2) = 0x6e;
          *(undefined1 *)((ulong)local_70[0] + lVar6 + 3) = 0x6b;
          *(undefined1 *)((ulong)local_70[0] + lVar6 + 4) = 0;
          iVar5 = FUN__text__004aecec(lVar1,lVar6,local_70[0]);
          uVar2 = local_6c;
          bVar4 = local_70[0];
          if (iVar5 != 1) {
LAB__text__004a53a8:
            FUN__text__00400fc0(0,lVar6);
            return iVar5;
          }
          uVar7 = *(uint *)(param_1 + 0xd0);
          if ((uVar7 == 0) ||
             (fVar13 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xd8)),
             0.9 < fVar13 / (float)uVar7)) {
            FUN__text__004ac890(param_1 + 0xc0);
            uVar7 = *(uint *)(param_1 + 0xd0);
            if (uVar7 == 0) {
LAB__text__004a5394:
              iVar5 = 0x34;
              goto LAB__text__004a53a8;
            }
          }
          uVar3 = 0;
          if (uVar7 != 0) {
            uVar3 = uVar2 / uVar7;
          }
          uVar12 = (ulong)(uVar2 - uVar3 * uVar7);
          plVar9 = (long *)(*(long *)(param_1 + 200) + uVar12 * 8);
          do {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) {
              plVar9 = (long *)FUN__text__00400f80(0,0x18);
              if (plVar9 == (undefined8 *)0x0) goto LAB__text__004a5394;
              lVar10 = uVar12 * 8;
              uVar8 = *(undefined8 *)(*(long *)(param_1 + 200) + lVar10);
              *(uint *)(plVar9 + 1) = uVar2;
              *plVar9 = uVar8;
              *(long **)(*(long *)(param_1 + 200) + lVar10) = plVar9;
              *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
              break;
            }
          } while (*(uint *)(plVar9 + 1) != uVar2);
          plVar9[2] = lVar6;
          uVar11 = uVar11 + 1;
          param_2 = (param_2 + -5) - (uint)bVar4;
        } while (uVar11 < local_64);
      }
LAB__text__004a5380:
    } while (param_2 != 0);
  }
  return 1;
}


