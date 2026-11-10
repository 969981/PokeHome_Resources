/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004465c0; name: FUN_.text__004465c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004465c0(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_58;
  
  puVar5 = _DAT_008a45c0;
  if (*(char *)(param_1 + 0x28) == -2 && *(short *)(param_1 + 0x2c) == 0) {
    FUN__text__0044686c(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                        *(long *)(param_1 + 0x18) + 0x18);
    return;
  }
  plVar8 = (long *)*(long *)(param_2 + 8);
joined_r0x004465fc:
  do {
    while( true ) {
      do {
        plVar9 = plVar8;
        if (plVar9 == (long *)0x0) {
          return;
        }
        plVar8 = (long *)*plVar9;
      } while (((*(char *)(plVar9 + 5) != -2 || *(short *)((long)plVar9 + 0x2c) != 0) ||
               ((*(byte *)(plVar9 + 7) & 10) != 2)) || (lVar7 = plVar9[2], lVar7 == 0));
      uVar3 = *(ushort *)(param_1 + 0x2c);
      cVar2 = *(char *)(param_1 + 0x28);
      if ((cVar2 == -2) && (uVar3 == 1 || (uVar3 & 0xfffe) == 4)) break;
      if ((cVar2 == -2) && (uVar3 == 2)) {
        plVar10 = *(long **)(lVar7 + 0x48);
        if (plVar10 != (long *)0x0) {
          do {
            local_58 = 0x400000000;
            FUN__text__004745b0(plVar10[2],&local_58);
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
          lVar7 = plVar9[2];
        }
        for (plVar9 = *(long **)(lVar7 + 0x70); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          FUN__text__004b5f60(*puVar5,plVar9[2]);
        }
      }
      else if ((cVar2 == -2) && (uVar3 == 3)) {
        plVar10 = *(long **)(lVar7 + 0x48);
        if (plVar10 != (long *)0x0) {
          uVar1 = *(undefined4 *)(param_1 + 0x34);
          do {
            lVar7 = plVar10[2];
            local_58 = 0x400000000;
            *(undefined4 *)(lVar7 + 0x330) = uVar1;
            FUN__text__0047469c(lVar7,&local_58,0);
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
          lVar7 = plVar9[2];
        }
        for (plVar9 = *(long **)(lVar7 + 0x70); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          FUN__text__004b6e90(*puVar5,plVar9[2]);
        }
      }
    }
    plVar10 = *(long **)(lVar7 + 0x48);
    while (plVar10 != (long *)0x0) {
      while( true ) {
        cVar2 = *(char *)(param_1 + 0x28);
        sVar4 = *(short *)(param_1 + 0x2c);
        plVar6 = (long *)plVar10[2];
        plVar10 = (long *)*plVar10;
        if (cVar2 == -2 && sVar4 == 1) break;
        if ((cVar2 == -2) && (sVar4 == 4)) {
          (**(code **)(*plVar6 + 0x48))(plVar6,*(undefined4 *)(param_1 + 0x30),0);
        }
        else if ((cVar2 == -2) && (sVar4 == 5)) {
          (**(code **)(*plVar6 + 0x40))(plVar6,*(undefined4 *)(param_1 + 0x30));
        }
        if (plVar10 == (long *)0x0) goto joined_r0x004465fc;
      }
      local_58 = 0x400000000;
      *(undefined4 *)(plVar6 + 0x70) = *(undefined4 *)(param_1 + 0x34);
      FUN__text__00474488(plVar6,&local_58,0);
      *(byte *)(plVar9 + 7) = *(byte *)(plVar9 + 7) | 8;
    }
  } while( true );
}


