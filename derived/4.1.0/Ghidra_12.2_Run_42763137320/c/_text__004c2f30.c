/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c2f30; name: FUN_.text__004c2f30
 */


void FUN__text__004c2f30(long param_1,long param_2,int param_3,char param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined4 local_48;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    lVar2 = (ulong)uVar1 * 0x30;
    plVar3 = *(long **)(param_1 + 0x10);
    do {
      if (((*(long *)(param_2 + 0x40) == *plVar3) && (*(long *)(param_2 + 0x10) == plVar3[1])) &&
         (*(int *)(param_2 + 0x2c) == (int)plVar3[2])) {
        if (plVar3 == *(long **)(param_1 + 0x10) + (ulong)uVar1 * 6) {
          return;
        }
        plVar3 = (long *)plVar3[4];
        if (plVar3 == (long *)0x0) {
          return;
        }
        if (param_4 == -1) {
          do {
            if ((((plVar3[3] == param_2) && ((char)plVar3[5] == -0x70)) &&
                (*(char *)((long)plVar3 + 0x2d) != '\0')) &&
               (((*(byte *)(plVar3 + 7) >> 2 & 1) == 0 && (*(int *)((long)plVar3 + 0x34) <= param_3)
                ))) {
              local_48 = (undefined4)plVar3[6];
              uStack_4f = (undefined7)((ulong)plVar3[5] >> 8);
              _local_50 = CONCAT71(uStack_4f,0x80);
              FUN__text__004c20f0(param_1,param_2,&local_50,*(int *)((long)plVar3 + 0x34),1,0);
            }
            plVar3 = (long *)*plVar3;
          } while (plVar3 != (long *)0x0);
          return;
        }
        do {
          if ((((plVar3[3] == param_2) && (*(char *)((long)plVar3 + 0x29) == param_4)) &&
              (((char)plVar3[5] == -0x70 &&
               ((*(char *)((long)plVar3 + 0x2d) != '\0' && ((*(byte *)(plVar3 + 7) >> 2 & 1) == 0)))
               ))) && (*(int *)((long)plVar3 + 0x34) <= param_3)) {
            local_48 = (undefined4)plVar3[6];
            uStack_4f = (undefined7)((ulong)plVar3[5] >> 8);
            _local_50 = CONCAT71(uStack_4f,0x80);
            FUN__text__004c20f0(param_1,param_2,&local_50,*(int *)((long)plVar3 + 0x34),1,0);
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
        return;
      }
      plVar3 = plVar3 + 6;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return;
}


