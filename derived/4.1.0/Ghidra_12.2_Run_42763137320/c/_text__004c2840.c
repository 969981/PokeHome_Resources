/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c2840; name: FUN_.text__004c2840
 */


/* WARNING: Removing unreachable block (ram,0x004c28f0) */

void FUN__text__004c2840(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined2 local_4c [2];
  undefined2 local_48;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 != 0) {
    lVar5 = (ulong)uVar2 * 0x30;
    plVar4 = *(long **)(param_1 + 0x10);
    do {
      if (((*(long *)(param_2 + 0x40) == *plVar4) && (*(long *)(param_2 + 0x10) == plVar4[1])) &&
         (*(int *)(param_2 + 0x2c) == (int)plVar4[2])) {
        if (plVar4 == *(long **)(param_1 + 0x10) + (ulong)uVar2 * 6) {
          return;
        }
        plVar8 = plVar4 + 3;
        local_4c[0] = 0xb0;
        local_48 = 0x40;
        uVar3 = FUN__text__004c2c20(param_1,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0x1b0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0x2b0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0x3b0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0x4b0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0x5b0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0x6b0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0x7b0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0x8b0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0x9b0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0xab0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0xbb0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0xcb0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0xdb0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0xeb0;
        uVar3 = FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        local_48 = 0x40;
        local_4c[0] = 0xfb0;
        FUN__text__004c2c20(uVar3,plVar8,param_2,local_4c);
        plVar7 = plVar4 + 4;
        plVar6 = (long *)*plVar7;
        *(undefined2 *)(plVar4 + 5) = 0;
        if (plVar6 != (long *)0x0) {
          plVar4 = (long *)0x0;
          do {
            if (((plVar6[3] == param_2) &&
                (*(undefined4 *)((long)plVar6 + 0x34) = 0, (char)plVar6[5] == -0x70)) &&
               ((*(char *)((long)plVar6 + 0x2d) != '\0' && ((*(byte *)(plVar6 + 7) >> 2 & 1) == 0)))
               ) {
              if ((*(byte *)(plVar6 + 7) >> 1 & 1) == 0) {
                plVar9 = (long *)*plVar6;
                plVar1 = plVar7;
                if ((long *)*plVar7 != plVar6) {
                  plVar1 = plVar4;
                }
                *plVar1 = (long)plVar9;
                if ((long *)*plVar8 == plVar6) {
                  *plVar8 = (long)plVar4;
                }
                FUN__text__00445db0(plVar6);
                plVar6 = plVar9;
              }
              else {
                FUN__text__00446824(plVar6);
              }
            }
            plVar4 = plVar6;
            plVar6 = (long *)*plVar4;
          } while (plVar6 != (long *)0x0);
        }
        local_4c[0] = 0xfff0;
        local_48 = 1;
        FUN__text__004c20f0(param_1,param_2,local_4c,0,0,0);
        FUN__text__004c2460(param_1,0);
        plVar4 = *(long **)(param_1 + 0x28);
        if (plVar4 == (long *)0x0) {
          return;
        }
        plVar6 = (long *)0x0;
        do {
          while (plVar7 = plVar4, plVar4 = (long *)*plVar7, plVar7[3] != param_2) {
            plVar6 = plVar7;
            if (plVar4 == (long *)0x0) {
              return;
            }
          }
          lVar5 = plVar7[2];
          plVar8 = (long *)(param_1 + 0x28);
          if (*(long **)(param_1 + 0x28) != plVar7) {
            plVar8 = plVar6;
          }
          *plVar8 = (long)plVar4;
          if (*(long **)(param_1 + 0x20) == plVar7) {
            *(long **)(param_1 + 0x20) = plVar6;
          }
          *(undefined8 *)(lVar5 + 0x18) = 0;
          FUN__text__00446af0(plVar7);
          FUN__text__00445db0(plVar7);
        } while (plVar4 != (long *)0x0);
        return;
      }
      plVar4 = plVar4 + 6;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
  }
  return;
}


