/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5b08; name: FUN_.text__005f5b08
 */


long FUN__text__005f5b08(ulong *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  long lVar5;
  
  puVar4 = param_1;
  if ((*(byte *)((long)param_1 + 0xc) >> 1 & 1) == 0) {
    puVar4 = (ulong *)((long)param_1 - param_1[-1]);
  }
  bVar3 = *(byte *)((long)param_1 + 0xc) >> 2 & 1;
  lVar1 = *param_1 + 0x18;
  if (*param_1 < 0x11) {
    lVar1 = 0x28;
  }
  lVar2 = param_2 + 0x18;
  if (param_2 < 0x11) {
    lVar2 = 0x28;
  }
  FUN__text__005f5918(param_1,param_2,puVar4 == param_1,0);
  lVar5 = (lVar1 - lVar2) - 0x18;
  if ((ulong)(lVar1 - lVar2) < 0x29) {
    lVar5 = 0x10;
  }
  if (lVar1 == 0) {
    bVar3 = 1;
  }
  lVar1 = *param_1 + 0x18;
  if (*param_1 < 0x11) {
    lVar1 = 0x28;
  }
  if ((*(byte *)((long)param_1 + 0xc) & 4) != 0) {
    lVar1 = 0;
  }
  FUN__text__005f5918((long)param_1 + lVar1,lVar5,0,bVar3);
  return (long)param_1 + lVar1;
}


