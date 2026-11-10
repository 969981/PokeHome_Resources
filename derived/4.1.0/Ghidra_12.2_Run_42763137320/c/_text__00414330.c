/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414330; name: FUN_.text__00414330
 */


long FUN__text__00414330(long param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = FUN__text__00405b00(*(undefined4 *)(param_1 + 0x28));
LAB__text__00414364:
  do {
    puVar1 = (uint *)(uVar5 + 0x10);
    while (uVar5 != 0) {
      uVar2 = *(int *)(uVar5 + 8) - param_2 & -param_3;
      if (-1 < (int)uVar2) {
        uVar6 = *(ulong *)(param_1 + 0x38);
        *(uint *)(uVar5 + 8) = uVar2;
        *(int *)(uVar5 + 0xc) = *(int *)(uVar5 + 0xc) + 1;
        return (uVar6 & uVar5) + (ulong)uVar2;
      }
      if ((ulong)*(uint *)(param_1 + 0x2c) - 0x18 < (ulong)param_2) {
        return 0;
      }
      do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar2 | 0x80000000;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar2 & 0x7fffffff) != *(uint *)(uVar5 + 0xc)) {
        FUN__text__00405b80(*(undefined4 *)(param_1 + 0x28),0);
        uVar5 = 0;
        goto LAB__text__00414364;
      }
      *(undefined4 *)(uVar5 + 8) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(uVar5 + 0xc) = 0;
      *(undefined4 *)(uVar5 + 0x10) = 0;
    }
    uVar5 = FUN__text__00414440(param_1);
    FUN__text__00405b80(*(undefined4 *)(param_1 + 0x28),uVar5);
    if (uVar5 == 0) {
      return 0;
    }
  } while( true );
}


