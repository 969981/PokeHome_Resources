/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00474a48; name: FUN_.text__00474a48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00474a48(long param_1,uint param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = (uint *)(param_1 + 0x313);
  if ((*puVar1 >> 0xc & 1) == 0) {
    *puVar1 = *puVar1 | 0x1000;
    puVar2 = _DAT_008a4648;
    if ((param_2 | 2) == 2) {
      if (*(long *)(param_1 + 0x288) != 0) {
        FUN__text__0042f5a0(*_DAT_008a4648,*(long *)(param_1 + 0x288),param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x288) = 0;
      }
      if (*(long *)(param_1 + 0x290) != 0) {
        FUN__text__0042f5a0(*puVar2,*(long *)(param_1 + 0x290),param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x290) = 0;
      }
      lVar4 = *(long *)(param_1 + 0x168);
      if (lVar4 != 0) {
        if ((*(byte *)(lVar4 + 0x28) >> 1 & 1) != 0) {
          puVar3 = (undefined4 *)FUN__text__0046ab20(*(undefined8 *)(param_1 + 0x1e8));
          plVar5 = *(long **)(puVar3 + 2);
          if (plVar5 != (long *)0x0) {
            if (*(ushort *)(plVar5 + 2) - 1 == 0) {
              if (*plVar5 != 0) {
                *(undefined4 *)(plVar5 + 1) = 0;
                FUN__text__00400fc0(0);
                *plVar5 = 0;
                *(undefined4 *)((long)plVar5 + 0xc) = 0;
              }
              FUN__text__00400fc0(0,plVar5);
            }
            else {
              *(short *)(plVar5 + 2) = (short)(*(ushort *)(plVar5 + 2) - 1);
            }
          }
          *(undefined8 *)(puVar3 + 2) = 0;
          *puVar3 = 0;
          lVar4 = *(long *)(param_1 + 0x168);
        }
        FUN__text__0047bea0(*_DAT_008a4650,lVar4,param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined4 *)(param_1 + 0x170) = 0;
      }
      if (((*puVar1 >> 0xe & 1) != 0) && (*(int *)(param_1 + 0x380) == 0)) {
        *(undefined4 *)(param_1 + 0x380) = 0xffffffff;
      }
      *puVar1 = *puVar1 & 0xfffffeff | 0x400;
    }
  }
  return;
}


