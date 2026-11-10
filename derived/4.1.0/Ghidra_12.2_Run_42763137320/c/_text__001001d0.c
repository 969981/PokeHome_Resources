/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001001d0; name: FUN_.text__001001d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__001001d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((param_3 != 0) &&
     (uVar4 = (_DAT_0089f280 - _DAT_0089f278 >> 3) * -0x5555555555555555, DAT_008e1210 < uVar4)) {
    do {
      uVar3 = DAT_008e1210;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x8e1210,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_008e1210 = DAT_008e1210 + 1;
      }
    } while (cVar1 != '\0');
    if (uVar3 < uVar4) {
      puVar5 = (undefined8 *)(_DAT_0089f278 + uVar3 * 0x18);
      puVar5[2] = param_3;
      *puVar5 = param_1;
      puVar5[1] = param_2;
      return 0;
    }
  }
  return 0xffffffff;
}


