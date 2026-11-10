/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019d544; name: FUN_.text__0019d544
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0019d544(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  
  local_58 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  plVar4 = *(long **)(local_58 + 8);
  if (lVar1 != 0) {
    local_48 = *(long *)(param_1 + 0x18);
    local_50 = lVar1;
    if (local_48 != 0) {
      plVar2 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
      uVar7 = tpidr_el0;
      uVar7 = uVar7 & 0xffffffffffffe000;
      if (*(long *)(uVar7 + 0x98) != 0x10) {
        lVar1 = uVar7 + 0x18;
        *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar4;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        plVar2[1] = local_58;
        plVar2[2] = local_50;
        lVar3 = _DAT_008a0e78;
        *(undefined1 *)(plVar2 + 4) = 0;
        *(undefined8 *)((long)plVar2 + 0x4c) = 0;
        *(undefined8 *)((long)plVar2 + 0x54) = 0;
        *(undefined8 *)((long)plVar2 + 0x5c) = 0;
        *(undefined8 *)((long)plVar2 + 100) = 0;
        *(undefined8 *)((long)plVar2 + 0x6c) = 0;
        *(undefined8 *)((long)plVar2 + 0x72) = 0;
        *(undefined8 *)((long)plVar2 + 0x24) = 0;
        *(undefined8 *)((long)plVar2 + 0x2c) = 0;
        *(undefined1 *)((long)plVar2 + 0x34) = 0;
        plVar2[7] = 0;
        plVar2[8] = 0;
        *(undefined1 *)(plVar2 + 9) = 0;
        plVar2[3] = local_48;
        *plVar2 = lVar3 + 0x10;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        puVar5 = *(undefined8 **)(param_1 + 0xe8);
        *(long **)(param_1 + 0xe8) = plVar2;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5);
          (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))
                    (*(long **)(param_1 + 0xf0),puVar5,*(undefined8 *)(param_1 + 0xf8),
                     *(undefined8 *)(param_1 + 0x100));
        }
        *(long **)(param_1 + 0xf0) = plVar4;
        *(undefined8 *)(param_1 + 0xf8) = 0x80;
        *(undefined8 *)(param_1 + 0x100) = 8;
        plVar2 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x90,8);
        if (*(long *)(uVar7 + 0x98) != 0x10) {
          *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar4;
          *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
          plVar2[1] = local_58;
          plVar2[2] = local_50;
          lVar3 = _DAT_008a0e80;
          *(undefined1 *)(plVar2 + 4) = 0;
          *(undefined1 *)((long)plVar2 + 0x24) = 0;
          plVar2[9] = 0;
          plVar2[5] = 0;
          plVar2[6] = 0;
          *(undefined8 *)((long)plVar2 + 0x4e) = 0;
          plVar2[7] = 0;
          plVar2[8] = 0;
          *(undefined1 *)(plVar2 + 0xb) = 0;
          *(undefined1 *)((long)plVar2 + 0x5c) = 0;
          plVar2[0xc] = 0;
          plVar2[0xd] = 0;
          plVar2[0xe] = 0;
          plVar2[0xf] = 0;
          plVar2[0x10] = 0;
          *(undefined8 *)((long)plVar2 + 0x86) = 0;
          plVar2[3] = local_48;
          *plVar2 = lVar3 + 0x10;
          *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
          puVar5 = *(undefined8 **)(param_1 + 0x108);
          *(long **)(param_1 + 0x108) = plVar2;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5);
            (**(code **)(**(long **)(param_1 + 0x110) + 0x18))
                      (*(long **)(param_1 + 0x110),puVar5,*(undefined8 *)(param_1 + 0x118),
                       *(undefined8 *)(param_1 + 0x120));
          }
          *(long **)(param_1 + 0x110) = plVar4;
          *(undefined8 *)(param_1 + 0x118) = 0x90;
          *(undefined8 *)(param_1 + 0x120) = 8;
          puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x1d0,8);
          if (*(long *)(uVar7 + 0x98) != 0x10) {
            *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar4;
            *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
            puVar5[1] = local_58;
            *(undefined1 *)(puVar5 + 4) = 0;
            *(undefined8 *)((long)puVar5 + 0x24) = 0;
            *(undefined8 *)((long)puVar5 + 0x2c) = 0;
            *(undefined8 *)((long)puVar5 + 0x34) = 0;
            *(undefined8 *)((long)puVar5 + 0x3c) = 0;
            *(undefined8 *)((long)puVar5 + 0x44) = 0;
            *(undefined8 *)((long)puVar5 + 0x4c) = 0;
            *(undefined8 *)((long)puVar5 + 0x54) = 0;
            *(undefined8 *)((long)puVar5 + 0x5c) = 0;
            puVar5[2] = local_50;
            *(undefined8 *)((long)puVar5 + 100) = 0;
            *(undefined8 *)((long)puVar5 + 0x6a) = 0;
            *(undefined1 *)((long)puVar5 + 0x74) = 0;
            *puVar5 = 0x86daa0;
            *(undefined1 *)(puVar5 + 0x12) = 0;
            puVar5[0xf] = 0;
            *(undefined8 *)((long)puVar5 + 0x1c2) = 0;
            *(undefined8 *)((long)puVar5 + 0x1bc) = 0;
            *(undefined8 *)((long)puVar5 + 0x1b4) = 0;
            *(undefined8 *)((long)puVar5 + 0x1ac) = 0;
            *(undefined8 *)((long)puVar5 + 0x1a4) = 0;
            *(undefined8 *)((long)puVar5 + 0x19c) = 0;
            puVar5[3] = local_48;
            puVar5[0x10] = 0;
            puVar5[0x11] = 0;
            memset((void *)((long)puVar5 + 0x94),0,0x105);
            *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
            puVar6 = *(undefined8 **)(param_1 + 0x128);
            *(undefined8 **)(param_1 + 0x128) = puVar5;
            if (puVar6 != (undefined8 *)0x0) {
              (**(code **)*puVar6)(puVar6);
              (**(code **)(**(long **)(param_1 + 0x130) + 0x18))
                        (*(long **)(param_1 + 0x130),puVar6,*(undefined8 *)(param_1 + 0x138),
                         *(undefined8 *)(param_1 + 0x140));
            }
            *(long **)(param_1 + 0x130) = plVar4;
            *(undefined8 *)(param_1 + 0x138) = 0x1d0;
            *(undefined8 *)(param_1 + 0x140) = 8;
            plVar2 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x78,8);
            if (*(long *)(uVar7 + 0x98) != 0x10) {
              *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar4;
              *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
              plVar2[1] = local_58;
              plVar2[2] = local_50;
              lVar1 = _DAT_008a0e90;
              *(undefined8 *)((long)plVar2 + 0x44) = 0;
              *(undefined8 *)((long)plVar2 + 0x4c) = 0;
              *(undefined8 *)((long)plVar2 + 0x54) = 0;
              *(undefined8 *)((long)plVar2 + 0x5c) = 0;
              *(undefined8 *)((long)plVar2 + 100) = 0;
              *(undefined8 *)((long)plVar2 + 0x6a) = 0;
              plVar2[5] = 0;
              plVar2[6] = 0;
              plVar2[7] = 0;
              *(undefined1 *)(plVar2 + 8) = 0;
              *plVar2 = lVar1 + 0x10;
              plVar2[3] = local_48;
              plVar2[4] = 0;
              *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
              puVar5 = *(undefined8 **)(param_1 + 0x148);
              *(long **)(param_1 + 0x148) = plVar2;
              if (puVar5 != (undefined8 *)0x0) {
                (**(code **)*puVar5)(puVar5);
                (**(code **)(**(long **)(param_1 + 0x150) + 0x18))
                          (*(long **)(param_1 + 0x150),puVar5,*(undefined8 *)(param_1 + 0x158),
                           *(undefined8 *)(param_1 + 0x160));
              }
              *(long **)(param_1 + 0x150) = plVar4;
              *(undefined8 *)(param_1 + 0x158) = 0x78;
              *(undefined8 *)(param_1 + 0x160) = 8;
              FUN__text__0019dfd0(&local_78,plVar4,&local_58);
              lVar1 = local_78;
              local_78 = 0;
              lVar3 = *(long *)(param_1 + 0x168);
              *(long *)(param_1 + 0x168) = lVar1;
              if (lVar3 == 0) {
                *(long **)(param_1 + 0x170) = local_70;
                *(undefined8 *)(param_1 + 0x178) = local_68;
                *(undefined8 *)(param_1 + 0x180) = local_60;
                return;
              }
              (**(code **)(**(long **)(param_1 + 0x170) + 0x18))
                        (*(long **)(param_1 + 0x170),lVar3,*(undefined8 *)(param_1 + 0x178),
                         *(undefined8 *)(param_1 + 0x180));
              lVar1 = local_78;
              local_78 = 0;
              *(undefined8 *)(param_1 + 0x180) = local_60;
              *(long **)(param_1 + 0x170) = local_70;
              *(undefined8 *)(param_1 + 0x178) = local_68;
              if (lVar1 != 0) {
                (**(code **)(*local_70 + 0x18))(local_70,lVar1,local_68,local_60);
              }
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


