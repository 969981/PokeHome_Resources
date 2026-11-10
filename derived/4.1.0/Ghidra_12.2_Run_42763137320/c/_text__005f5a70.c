/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5a70; name: FUN_.text__005f5a70
 */


ulong * FUN__text__005f5a70(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  ulong *puVar6;
  
  lVar1 = *param_1 + 0x18;
  if (*param_1 < 0x11) {
    lVar1 = 0x28;
  }
  lVar3 = lVar1;
  if ((*(byte *)((long)param_1 + 0xc) & 4) != 0) {
    lVar3 = 0;
  }
  puVar2 = (ulong *)((long)param_1 + lVar3);
  puVar6 = param_1;
  if ((*(byte *)((long)param_1 + 0xc) >> 1 & 1) == 0) {
    puVar6 = (ulong *)((long)param_1 - param_1[-1]);
  }
  lVar3 = *puVar2 + 0x18;
  if (*puVar2 < 0x11) {
    lVar3 = 0x28;
  }
  lVar4 = -0x18;
  if ((ulong)(lVar3 + lVar1) < 0x11) {
    lVar4 = -0x28;
  }
  bVar5 = *(byte *)((long)puVar2 + 0xc) >> 2 & 1;
  if (lVar3 == 0) {
    bVar5 = 1;
  }
  FUN__text__005f5918(param_1,lVar4 + lVar3 + lVar1,puVar6 == param_1,bVar5);
  return puVar2;
}


