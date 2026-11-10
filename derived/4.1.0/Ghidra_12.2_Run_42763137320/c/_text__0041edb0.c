/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041edb0; name: FUN_.text__0041edb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0041edb0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  lVar4 = *param_1;
  uVar5 = (uint)*(byte *)(param_1 + 1);
  if (lVar4 != 0 && uVar5 != 0) {
    if ((uVar5 < 0x25) && (_DAT_008ab03c == *(ushort *)(param_1 + 2))) {
      plVar1 = &DAT_00aea318 + (uVar5 - 1);
      do {
        lVar6 = *plVar1;
        *(long *)(lVar4 + -0x20) = lVar6;
        while (*plVar1 == lVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4 + -0x20;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            *(undefined4 *)(lVar4 + -0x18) = 0;
            *param_1 = 0;
            *(undefined2 *)(param_1 + 2) = 0;
            return;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
    FUN__text__00400fc0(5,lVar4 + -0x20);
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}


