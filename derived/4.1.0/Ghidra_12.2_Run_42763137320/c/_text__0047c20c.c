/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047c20c; name: FUN_.text__0047c20c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__0047c20c(undefined8 param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_2 == 0) {
    if ((char)param_2[0xb] == '\0') {
      lVar4 = *(long *)(param_3 + 2);
      if (lVar4 != 0) {
        plVar3 = *(long **)(param_2 + 4);
        if (plVar3 != (long *)0x0) {
          if (*(ushort *)(plVar3 + 2) - 1 == 0) {
            if (*plVar3 != 0) {
              *(undefined4 *)(plVar3 + 1) = 0;
              FUN__text__00400fc0(0);
              *plVar3 = 0;
              *(undefined4 *)((long)plVar3 + 0xc) = 0;
            }
            FUN__text__00400fc0(0,plVar3);
          }
          else {
            *(short *)(plVar3 + 2) = (short)(*(ushort *)(plVar3 + 2) - 1);
          }
        }
        *(long *)(param_2 + 4) = lVar4;
        *(short *)(lVar4 + 0x10) = *(short *)(lVar4 + 0x10) + 1;
        uVar1 = *param_3;
        *(short *)(param_2 + 8) = (short)uVar1;
        *(ulong *)(param_2 + 6) = *(long *)(param_2 + 2) + (ulong)(uVar1 & 0xffff) * 0x18;
      }
      uVar2 = FUN__text__0047c5b0(param_2,*(undefined4 *)(*_DAT_008a45c0 + 0x88));
      if ((*(byte *)(param_2 + 10) >> 1 & 1) != 0) {
        return uVar2;
      }
      FUN__text__0047cb90(param_2);
      *param_3 = (uint)*(ushort *)(param_2 + 8);
      lVar4 = *(long *)(param_2 + 4);
      plVar3 = *(long **)(param_3 + 2);
      if (plVar3 != (long *)0x0) {
        if (*(ushort *)(plVar3 + 2) - 1 == 0) {
          if (*plVar3 != 0) {
            *(undefined4 *)(plVar3 + 1) = 0;
            FUN__text__00400fc0(0);
            *plVar3 = 0;
            *(undefined4 *)((long)plVar3 + 0xc) = 0;
          }
          FUN__text__00400fc0(0,plVar3);
        }
        else {
          *(short *)(plVar3 + 2) = (short)(*(ushort *)(plVar3 + 2) - 1);
        }
      }
      *(long *)(param_3 + 2) = lVar4;
      if (lVar4 == 0) {
        return uVar2;
      }
      *(short *)(lVar4 + 0x10) = *(short *)(lVar4 + 0x10) + 1;
      return uVar2;
    }
    FUN__text__0047c8f0(param_2);
  }
  return 2;
}


