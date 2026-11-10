/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004377e0; name: FUN_.text__004377e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004377e0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined8 local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 local_c0;
  uint uStack_bc;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  long lStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  
  puVar1 = _DAT_008a45f0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xff;
  local_b0 = 0xff;
  local_a8 = 0;
  if (*(char *)(param_1 + 0x44) != '\0') {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
      local_9c = *(undefined4 *)
                  (*(long *)(param_1 + 0x28) + (ulong)*(ushort *)(param_1 + 0x42) * 0x28 + 0x20);
    }
    else {
      local_88 = (ulong)uStack_bc << 0x20;
      uStack_80 = CONCAT71(uStack_b7,0xff);
      local_78 = CONCAT71(uStack_af,0xff);
      local_64 = 0;
      lStack_90 = (ulong)uStack_c4 << 0x20;
      uStack_70 = 0;
      local_98 = 0;
      FUN__text__00434be0(*_DAT_008a45f0,*(undefined8 *)(lVar2 + 0x28),&local_98,&local_64,0);
      local_9c = 0;
      if (*(long *)(lVar2 + 8) != 0) {
        local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar2 + 0x18));
        FUN__text__0041a060(local_64,(long *)(lVar2 + 8),&local_98,&local_9c);
        *(undefined4 *)(lVar2 + 0x18) = (undefined4)local_98;
      }
    }
    local_98 = CONCAT44(local_98._4_4_,local_9c);
    FUN__text__004363b0(param_1,&local_d0,&local_98,&local_64,0,0,0);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x48);
    do {
      local_d0 = *puVar4;
      if (*(char *)((long)puVar4 + 10) != '\0') {
        lVar2 = *(long *)(param_1 + 0x20);
        if (lVar2 == 0) {
          local_9c = *(undefined4 *)
                      (*(long *)(param_1 + 0x28) + (ulong)*(ushort *)(puVar4 + 1) * 0x28 + 0x20);
        }
        else {
          local_88 = CONCAT44(uStack_bc,local_c0);
          uStack_80 = CONCAT71(uStack_b7,local_b8);
          local_78 = CONCAT71(uStack_af,local_b0);
          local_64 = 0;
          lStack_90 = CONCAT44(uStack_c4,local_c8);
          uStack_70 = local_a8;
          local_98 = local_d0;
          FUN__text__00434be0(*puVar1,*(undefined8 *)(lVar2 + 0x28),&local_98,&local_64,0);
          local_9c = 0;
          if (*(long *)(lVar2 + 8) != 0) {
            local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar2 + 0x18));
            FUN__text__0041a060(local_64,(long *)(lVar2 + 8),&local_98,&local_9c);
            *(undefined4 *)(lVar2 + 0x18) = (undefined4)local_98;
          }
        }
        local_98 = CONCAT44(local_98._4_4_,local_9c);
        FUN__text__004363b0(param_1,&local_d0,&local_98,&local_64,0,0,0);
      }
      if (*(int *)(puVar4 + 3) != 0) {
        puVar6 = (undefined4 *)puVar4[2];
        do {
          local_c8 = *puVar6;
          if (*(char *)((long)puVar6 + 6) != '\0') {
            lVar2 = *(long *)(param_1 + 0x20);
            if (lVar2 == 0) {
              local_9c = *(undefined4 *)
                          (*(long *)(param_1 + 0x28) + (ulong)*(ushort *)(puVar6 + 1) * 0x28 + 0x20)
              ;
            }
            else {
              local_88 = CONCAT44(uStack_bc,local_c0);
              uStack_80 = CONCAT71(uStack_b7,local_b8);
              local_78 = CONCAT71(uStack_af,local_b0);
              local_64 = 0;
              lStack_90 = CONCAT44(uStack_c4,local_c8);
              uStack_70 = local_a8;
              local_98 = local_d0;
              FUN__text__00434be0(*puVar1,*(undefined8 *)(lVar2 + 0x28),&local_98,&local_64,0);
              local_9c = 0;
              if (*(long *)(lVar2 + 8) != 0) {
                local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar2 + 0x18));
                FUN__text__0041a060(local_64,(long *)(lVar2 + 8),&local_98,&local_9c);
                *(undefined4 *)(lVar2 + 0x18) = (undefined4)local_98;
              }
            }
            local_98 = CONCAT44(local_98._4_4_,local_9c);
            FUN__text__004363b0(param_1,&local_d0,&local_98,&local_64,0,0,0);
          }
          if (puVar6[4] != 0) {
            puVar7 = *(undefined4 **)(puVar6 + 2);
            do {
              local_c0 = *puVar7;
              if (*(char *)((long)puVar7 + 6) != '\0') {
                lVar2 = *(long *)(param_1 + 0x20);
                if (lVar2 == 0) {
                  local_9c = *(undefined4 *)
                              (*(long *)(param_1 + 0x28) + (ulong)*(ushort *)(puVar7 + 1) * 0x28 +
                              0x20);
                }
                else {
                  local_88 = CONCAT44(uStack_bc,local_c0);
                  uStack_80 = CONCAT71(uStack_b7,local_b8);
                  local_78 = CONCAT71(uStack_af,local_b0);
                  local_64 = 0;
                  lStack_90 = CONCAT44(uStack_c4,local_c8);
                  uStack_70 = local_a8;
                  local_98 = local_d0;
                  FUN__text__00434be0(*puVar1,*(undefined8 *)(lVar2 + 0x28),&local_98,&local_64,0);
                  local_9c = 0;
                  if (*(long *)(lVar2 + 8) != 0) {
                    local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar2 + 0x18));
                    FUN__text__0041a060(local_64,(long *)(lVar2 + 8),&local_98,&local_9c);
                    *(undefined4 *)(lVar2 + 0x18) = (undefined4)local_98;
                  }
                }
                local_98 = CONCAT44(local_98._4_4_,local_9c);
                FUN__text__004363b0(param_1,&local_d0,&local_98,&local_64,0,0,0);
              }
              if (puVar7[4] != 0) {
                puVar8 = *(undefined1 **)(puVar7 + 2);
                do {
                  local_b8 = *puVar8;
                  if (puVar8[4] != '\0') {
                    lVar2 = *(long *)(param_1 + 0x20);
                    if (lVar2 == 0) {
                      local_9c = *(undefined4 *)
                                  (*(long *)(param_1 + 0x28) + (ulong)*(ushort *)(puVar8 + 2) * 0x28
                                  + 0x20);
                    }
                    else {
                      local_88 = CONCAT44(uStack_bc,local_c0);
                      uStack_80 = CONCAT71(uStack_b7,local_b8);
                      local_78 = CONCAT71(uStack_af,local_b0);
                      local_64 = 0;
                      lStack_90 = CONCAT44(uStack_c4,local_c8);
                      uStack_70 = local_a8;
                      local_98 = local_d0;
                      FUN__text__00434be0(*puVar1,*(undefined8 *)(lVar2 + 0x28),&local_98,&local_64,
                                          0);
                      local_9c = 0;
                      if (*(long *)(lVar2 + 8) != 0) {
                        local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar2 + 0x18));
                        FUN__text__0041a060(local_64,(long *)(lVar2 + 8),&local_98,&local_9c);
                        *(undefined4 *)(lVar2 + 0x18) = (undefined4)local_98;
                      }
                    }
                    local_98 = CONCAT44(local_98._4_4_,local_9c);
                    FUN__text__004363b0(param_1,&local_d0,&local_98,&local_64,0,0,0);
                  }
                  if (*(int *)(puVar8 + 0x10) != 0) {
                    puVar3 = *(undefined1 **)(puVar8 + 8);
                    do {
                      local_b0 = *puVar3;
                      if (puVar3[4] != '\0') {
                        lVar2 = *(long *)(param_1 + 0x20);
                        if (lVar2 == 0) {
                          local_9c = *(undefined4 *)
                                      (*(long *)(param_1 + 0x28) +
                                       (ulong)*(ushort *)(puVar3 + 2) * 0x28 + 0x20);
                        }
                        else {
                          local_88 = CONCAT44(uStack_bc,local_c0);
                          uStack_80 = CONCAT71(uStack_b7,local_b8);
                          local_78 = CONCAT71(uStack_af,local_b0);
                          local_64 = 0;
                          lStack_90 = CONCAT44(uStack_c4,local_c8);
                          uStack_70 = local_a8;
                          local_98 = local_d0;
                          FUN__text__00434be0(*puVar1,*(undefined8 *)(lVar2 + 0x28),&local_98,
                                              &local_64,0);
                          local_9c = 0;
                          if (*(long *)(lVar2 + 8) != 0) {
                            local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar2 + 0x18));
                            FUN__text__0041a060(local_64,(long *)(lVar2 + 8),&local_98,&local_9c);
                            *(undefined4 *)(lVar2 + 0x18) = (undefined4)local_98;
                          }
                        }
                        local_98 = CONCAT44(local_98._4_4_,local_9c);
                        FUN__text__004363b0(param_1,&local_d0,&local_98,&local_64,0,0,0);
                      }
                      if (*(int *)(puVar3 + 0x10) != 0) {
                        puVar5 = *(undefined8 **)(puVar3 + 8);
                        do {
                          local_a8 = *puVar5;
                          lVar2 = *(long *)(param_1 + 0x20);
                          if (lVar2 == 0) {
                            local_9c = *(undefined4 *)
                                        (*(long *)(param_1 + 0x28) +
                                         (ulong)*(ushort *)(puVar5 + 1) * 0x28 + 0x20);
                          }
                          else {
                            local_88 = CONCAT44(uStack_bc,local_c0);
                            uStack_80 = CONCAT71(uStack_b7,local_b8);
                            local_78 = CONCAT71(uStack_af,local_b0);
                            local_64 = 0;
                            lStack_90 = CONCAT44(uStack_c4,local_c8);
                            local_98 = local_d0;
                            uStack_70 = local_a8;
                            FUN__text__00434be0(*puVar1,*(undefined8 *)(lVar2 + 0x28),&local_98,
                                                &local_64,0);
                            local_9c = 0;
                            if (*(long *)(lVar2 + 8) != 0) {
                              local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar2 + 0x18));
                              FUN__text__0041a060(local_64,(long *)(lVar2 + 8),&local_98,&local_9c);
                              *(undefined4 *)(lVar2 + 0x18) = (undefined4)local_98;
                            }
                          }
                          local_98 = CONCAT44(local_98._4_4_,local_9c);
                          FUN__text__004363b0(param_1,&local_d0,&local_98,&local_64,0,0,0);
                          puVar5 = puVar5 + 2;
                        } while (puVar5 != (undefined8 *)
                                           (*(long *)(puVar3 + 8) +
                                           (ulong)*(uint *)(puVar3 + 0x10) * 0x10));
                      }
                      local_a8 = 0;
                      puVar3 = puVar3 + 0x18;
                    } while (puVar3 != (undefined1 *)
                                       (*(long *)(puVar8 + 8) +
                                       (ulong)*(uint *)(puVar8 + 0x10) * 0x18));
                  }
                  local_b0 = 0xff;
                  puVar8 = puVar8 + 0x18;
                } while (puVar8 != (undefined1 *)
                                   (*(long *)(puVar7 + 2) + (ulong)(uint)puVar7[4] * 0x18));
              }
              local_b8 = 0xff;
              puVar7 = puVar7 + 6;
            } while (puVar7 != (undefined4 *)(*(long *)(puVar6 + 2) + (ulong)(uint)puVar6[4] * 0x18)
                    );
          }
          local_c0 = 0;
          puVar6 = puVar6 + 6;
        } while (puVar6 != (undefined4 *)(puVar4[2] + (ulong)*(uint *)(puVar4 + 3) * 0x18));
      }
      puVar4 = puVar4 + 4;
      local_c8 = 0;
    } while (puVar4 != (undefined8 *)
                       (*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x50) * 0x20));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + '\x01';
    *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + '\x04';
    FUN__text__0043d6f0(param_1 + 0x58,param_2,param_1);
    *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + -4;
  }
  return;
}


