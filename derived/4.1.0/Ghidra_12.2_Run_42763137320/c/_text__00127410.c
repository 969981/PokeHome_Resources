/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00127410; name: FUN_.text__00127410
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00127410(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long local_180;
  long local_178;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  uVar5 = (ulong)*(uint *)(param_1 + 0xc90);
  if (*(uint *)(param_1 + 0xc90) != 0) {
    plVar7 = (long *)(param_1 + 0x98);
    bVar6 = true;
    do {
      bVar4 = false;
      if (*plVar7 != 0) {
        bVar4 = *(char *)(*plVar7 + 0x170) != '\0';
      }
      bVar6 = (bool)(bVar6 & bVar4);
      uVar5 = uVar5 - 1;
      plVar7 = plVar7 + 0x32;
    } while (uVar5 != 0);
    if (!bVar6) {
      return 0;
    }
  }
  puVar8 = (undefined8 *)(param_1 + 0xa0);
  do {
    local_178 = puVar8[-1];
    local_180 = 0x868fe0;
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x10))();
    }
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    if ((code *)puVar8[2] != (code *)0x0) {
      (*(code *)puVar8[2])(puVar8 + 4,auStack_150);
      local_170 = *puVar8;
      local_168 = (code *)puVar8[1];
      local_160 = puVar8[2];
      uStack_158 = puVar8[3];
    }
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    if ((code *)puVar8[0x12] != (code *)0x0) {
      (*(code *)puVar8[0x12])(puVar8 + 0x14,auStack_d0);
      local_f0 = puVar8[0x10];
      local_e8 = (code *)puVar8[0x11];
      local_e0 = puVar8[0x12];
      uStack_d8 = puVar8[0x13];
    }
    local_180 = 0x8691c8;
    if (local_178 == 0) {
LAB__text__001275f0:
      local_180 = 0x868fe0;
LAB__text__00127600:
      local_178 = 0;
      pcVar2 = local_e8;
    }
    else {
      FUN__text__005d9290(local_178,&local_180);
      lVar3 = local_178;
      local_178 = 0;
      if (lVar3 == 0) goto LAB__text__001275f0;
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      local_180 = _DAT_0089f878 + 0x10;
      if (local_178 != 0) {
        FUN__text__005d9290(local_178,&local_180);
        lVar3 = local_178;
        local_178 = 0;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          pcVar2 = local_e8;
          goto joined_r0x00127650;
        }
        goto LAB__text__00127600;
      }
      local_178 = 0;
      pcVar2 = local_e8;
    }
joined_r0x00127650:
    local_e8 = pcVar2;
    if (pcVar2 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar2)(auStack_d0);
    }
    pcVar2 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar2)(auStack_150);
    }
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    }
    puVar1 = puVar8 + 0x20;
    puVar8 = puVar8 + 0x32;
    if (puVar1 == (undefined8 *)(param_1 + 0xc90)) {
      *(undefined4 *)(param_1 + 0xc90) = 0;
      return 1;
    }
  } while( true );
}


