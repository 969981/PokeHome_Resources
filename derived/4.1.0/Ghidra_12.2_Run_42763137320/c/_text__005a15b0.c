/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a15b0; name: FUN_.text__005a15b0
 */


void FUN__text__005a15b0(long param_1,undefined8 param_2,ulong *param_3)

{
  byte *__s;
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  ulong local_88;
  byte *local_80;
  size_t local_78;
  long local_70;
  uint local_68;
  uint local_64;
  
  lVar5 = *(long *)(param_1 + 0xe8);
  puVar14 = (uint *)&DAT_00757c30;
  lVar7 = *(long *)(param_1 + 0xf0);
  uVar9 = tpidr_el0;
  uVar13 = uVar9 & 0xffffffffffffe000;
  do {
    local_64 = *puVar14;
    lVar6 = *param_3 + (ulong)local_64 * 0x120;
    lVar10 = *(long *)(lVar6 + 400);
    if ((((lVar10 != 0) &&
         (lVar10 = *(long *)(*(long *)(lVar10 + 0x78) + *(long *)((ulong)local_64 * 8 + 0x757c48)),
         lVar10 != 0)) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) &&
       (0 < *(int *)(lVar10 + 4))) {
      lVar11 = 0;
      do {
        lVar11 = lVar11 + 1;
        lVar12 = *(long *)(lVar10 + lVar11 * 0x10 + 0x10);
        __s = (byte *)(lVar12 + 2);
        uVar4 = FUN__text__005cf99c(lVar6 + 0x80,local_64,3,__s);
        local_68 = uVar4;
        if (-1 < (int)uVar4) {
          local_78 = strlen((char *)__s);
          bVar3 = *__s;
          local_88 = 0xcbf29ce484222645;
          if (bVar3 != 0) {
            pbVar8 = (byte *)(lVar12 + 3);
            do {
              local_88 = (local_88 ^ bVar3) * 0x100000001b3;
              bVar3 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar3 != 0);
          }
          uVar1 = *(ulong *)(param_1 + 0xf0);
          local_70 = 0;
          local_80 = __s;
          if (uVar1 < *(ulong *)(param_1 + 0xf8)) {
            if (*(long *)(uVar13 + 0x98) == 0x10) goto LAB__text__005a1858;
            *(undefined8 *)(uVar13 + *(long *)(uVar13 + 0x98) * 8 + 0x18) =
                 *(undefined8 *)(param_1 + 0x100);
            *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + 1;
            FUN__text__005a0e08(uVar1,&local_88,local_64,uVar4);
            *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + -1;
            *(ulong *)(param_1 + 0xf0) = uVar1 + 0x40;
          }
          else {
            FUN__text__005a1c10((long *)(param_1 + 0xe8),&local_88,&local_64,&local_68);
          }
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          }
        }
      } while (lVar11 < *(int *)(lVar10 + 4));
    }
    puVar14 = puVar14 + 1;
  } while (puVar14 != (uint *)0x757c48);
  local_88 = *param_3;
  *param_3 = 0;
  local_80 = (byte *)CONCAT44((int)((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8))
                                   >> 6),(int)((ulong)(lVar7 - lVar5) >> 6));
  puVar2 = *(ulong **)(param_1 + 0xc0);
  if (puVar2 < *(ulong **)(param_1 + 200)) {
    uVar9 = uVar9 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) {
LAB__text__005a1858:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xd0);
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    *puVar2 = local_88;
    puVar2[1] = (ulong)local_80;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    *(ulong **)(param_1 + 0xc0) = puVar2 + 2;
  }
  else {
    FUN__text__005a1e70(param_1 + 0xb8,&local_88);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    }
  }
  return;
}


