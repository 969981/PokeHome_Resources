/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022c190; name: FUN_.text__0022c190
 */


void FUN__text__0022c190(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  void *__src;
  long lVar5;
  long lVar6;
  uint local_cf20 [2];
  undefined8 local_cf18;
  ushort local_cf10;
  short local_78;
  char local_76;
  char local_75;
  char local_74;
  char local_73;
  undefined8 local_70 [2];
  
  if (param_2 == 2) {
    iVar4 = *(int *)(param_1 + 0x78) + 100;
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 0) {
        uVar3 = FUN__text__00327740();
        *(undefined4 *)(param_1 + 0x74) = uVar3;
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      goto LAB__text__0022c1f0;
    }
    iVar4 = *(int *)(param_1 + 0x78) + -100;
  }
  *(int *)(param_1 + 0x78) = iVar4;
LAB__text__0022c1f0:
  lVar5 = 0;
  lVar6 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x74) <= (int)lVar6 + *(int *)(param_1 + 0x78)) {
      return;
    }
    __src = (void *)FUN__text__00327760();
    memcpy(local_cf20,__src,0xcea8);
    lVar1 = param_1 + lVar5;
    local_70[0] = local_cf18;
    iVar4 = nn::time::ToCalendarTime
                      ((CalendarTime *)&local_78,(CalendarAdditionalInfo *)0x0,(PosixTime *)local_70
                      );
    if (iVar4 == 0) {
      *(int *)(lVar1 + 0x80) = (int)local_78;
      *(int *)(lVar1 + 0x84) = (int)local_76;
      *(int *)(lVar1 + 0x88) = (int)local_75;
      *(int *)(lVar1 + 0x8c) = (int)local_74;
      *(int *)(lVar1 + 0x90) = (int)local_73;
    }
    if (local_cf20[0] - 1 < 0x3d) break;
    if ((local_cf20[0] & 0xfffffffe) == 0x3e) {
      *(undefined4 *)(lVar1 + 0x7c) = 3;
      uVar3 = 0x17;
      if (local_cf20[0] == 0x3f) {
        uVar3 = 0x18;
      }
      lVar2 = param_1 + 0x11b34 + lVar5;
      *(undefined4 *)(lVar2 + 4) = uVar3;
      *(undefined4 *)(lVar2 + 8) = 0xf;
      *(undefined4 *)(lVar1 + 0x94) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = 4;
      *(uint *)(param_1 + 0x11b34 + lVar5) = (uint)local_cf10;
    }
    lVar6 = lVar6 + 1;
    lVar5 = lVar5 + 0x11ad0;
    if (lVar6 == 100) {
      return;
    }
  }
                    /* WARNING: Could not emulate address calculation at 0x0022c320 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK__text__0022c224 + (ulong)*(byte *)((ulong)(local_cf20[0] - 1) + 0x729610) * 4))();
  return;
}


