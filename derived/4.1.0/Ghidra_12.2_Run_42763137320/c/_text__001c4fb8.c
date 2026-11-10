/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c4fb8; name: FUN_.text__001c4fb8
 */


void FUN__text__001c4fb8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_d0 [3];
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  *(undefined8 *)(param_1 + 0x48) = 0x43e189f9d663f36;
  lVar5 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0xe58f531df9c6bd00;
  *(undefined8 *)(param_1 + 0x60) = 0x84cdf78283baf80f;
  *(undefined8 *)(param_1 + 0x50) = 0xad4e4cff9756f613;
  *(undefined8 *)(param_1 + 0x58) = 0x2f4542f489ac0aba;
  *(undefined8 *)(param_1 + 0xb8) = 0x4c951aa131d5d94c;
  *(undefined8 *)(param_1 + 0xc0) = 0x265ac97af5318b82;
  *(undefined8 *)(param_1 + 200) = 0x3e0e1b60317f5d6e;
  *(undefined8 *)(param_1 + 0xd0) = 0x3711aee02ecf8f01;
  *(undefined8 *)(param_1 + 0x130) = 0x79eb66ce7218f9b3;
  *(undefined8 *)(param_1 + 0x138) = 0x2da7b4eddac70479;
  *(undefined8 *)(param_1 + 0x128) = 0xa3c1a2b2487ccf11;
  *(undefined8 *)(param_1 + 0x198) = 0x64b7a97459e83913;
  *(undefined8 *)(param_1 + 0x1a0) = 0x7f0962c4f571c06;
  *(undefined8 *)(param_1 + 0x140) = 0xb074b0fe3147a4a8;
  *(undefined8 *)(param_1 + 0x1a8) = 0x6ee8ed8d63f2520c;
  *(undefined8 *)(param_1 + 0x1b0) = 0x859feda5376893dc;
  *(undefined8 *)(param_1 + 0x1b8) = 0xd115b004b66e1f2b;
  *(undefined8 *)(param_1 + 0x210) = 0xf21e95b21ecf8e43;
  *(undefined8 *)(param_1 + 0x218) = 0xc212c3835317ddfd;
  *(undefined8 *)(param_1 + 0x220) = 0x1b2e3a58e455096f;
  *(undefined8 *)(param_1 + 0x228) = 0x2ca2442df53c29ce;
  *(undefined8 *)(param_1 + 0x280) = 0x64b7a87459e83760;
  *(undefined8 *)(param_1 + 0x288) = 0xdfc2cc8abaf85d17;
  *(undefined8 *)(param_1 + 0x290) = 0x265aca7af5318d35;
  *(undefined8 *)(param_1 + 0x298) = 0x1fe778eba926ec17;
  *(undefined8 *)(param_1 + 0x2a0) = 0xe62f61818c6c36c6;
  *(undefined8 *)(param_1 + 0x2f8) = 0x916ec29f1cd0e583;
  *(undefined8 *)(param_1 + 0x300) = 0xc212c2835317dc4a;
  *(undefined8 *)(param_1 + 0x308) = 0x7ccc25689c7bc8a6;
  *(undefined8 *)(param_1 + 0x310) = 0x8ab7cdb63de79529;
  *(undefined8 *)(param_1 + 0x368) = 0x64b7ab7459e83c79;
  *(undefined8 *)(param_1 + 0x370) = 0xc59351d7ad084b33;
  *(undefined8 *)(param_1 + 0x378) = 0xc212c1835317da97;
  *(undefined8 *)(param_1 + 0x380) = 0x20f70aae54cfe775;
  *(undefined8 *)(param_1 + 0x388) = 0x69916659057b2628;
  *(undefined8 *)(param_1 + 0x3e0) = 0xb5f4c03dc4faa13a;
  *(undefined8 *)(param_1 + 1000) = 0x6ee8ee8d63f253bf;
  *(undefined8 *)(param_1 + 0x3f0) = 0xdabaa2517227900d;
  *(undefined8 *)(param_1 + 0x3f8) = 0x537f4b2c2fae5990;
  *(undefined8 *)(param_1 + 0x450) = 0xedfba0f4b7115315;
  *(undefined8 *)(param_1 + 0x458) = 0x7a8dc1fe22a8a0c;
  *(undefined8 *)(param_1 + 0x460) = 0x6865a123c2b8fc5d;
  *(undefined8 *)(param_1 + 0x468) = 0xdd35e1355c3868e0;
  lVar2 = *(long *)(lVar5 + 0x2d0);
  if (lVar2 == 0) {
    lVar3 = lVar5;
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 8);
  }
  uVar1 = FUN__text__001281d4(lVar3);
  FUN__text__001156d0(local_d0,uVar1,0);
  lVar3 = *(long *)(local_d0[0] + 0x60);
  if (lVar3 == 0) {
    (**(code **)(*(long *)(local_d0[0] + 0x48) + 0x18))();
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    if ((local_d0[0] == 0) || ((**(code **)(*(long *)(local_d0[0] + 0x48) + 0x18))(), lVar3 != 0)) {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 != 0) {
        plVar4 = (long *)(lVar3 + 0x48);
        local_68 = lVar3;
        (**(code **)(*plVar4 + 0x10))(plVar4);
        local_d0[0] = 0x401aa36e6ac728e;
        FUN__text__001ac1fc(lVar6,(undefined8 *)(param_1 + 0x60),&local_68,local_d0);
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 != 0) {
          local_70 = lVar3;
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar4);
          local_d0[0] = 0x3fe2536e6a95ab8;
          FUN__text__001ac1fc(lVar6,(undefined8 *)(param_1 + 0xd0),&local_70,local_d0);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          lVar6 = *(long *)(param_1 + 0x10);
          if (lVar6 != 0) {
            local_78 = lVar3;
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar4);
            local_d0[0] = 0x415aa36e6bd1b98;
            FUN__text__001ac1fc(lVar6,(undefined8 *)(param_1 + 0x140),&local_78,local_d0);
            if (local_78 != 0) {
              (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
              local_78 = 0;
            }
            lVar6 = *(long *)(param_1 + 0x10);
            if (lVar6 != 0) {
              local_80 = lVar3;
              (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar4);
              local_d0[0] = 0x404b136e6aeb44a;
              FUN__text__001ac1fc(lVar6,param_1 + 0x1b8,&local_80,local_d0);
              if (local_80 != 0) {
                (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
                local_80 = 0;
              }
              lVar6 = *(long *)(param_1 + 0x10);
              if (lVar6 != 0) {
                local_88 = lVar3;
                (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar4);
                local_d0[0] = 0x4081736e6b19773;
                FUN__text__001ac1fc(lVar6,param_1 + 0x228,&local_88,local_d0);
                if (local_88 != 0) {
                  (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
                  local_88 = 0;
                }
                lVar6 = *(long *)(param_1 + 0x10);
                if (lVar6 != 0) {
                  local_90 = lVar3;
                  (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar4);
                  local_d0[0] = 0x415af36e6bd2417;
                  FUN__text__001ac1fc(lVar6,param_1 + 0x2a0,&local_90,local_d0);
                  if (local_90 != 0) {
                    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
                    local_90 = 0;
                  }
                  lVar6 = *(long *)(param_1 + 0x10);
                  if (lVar6 != 0) {
                    local_98 = lVar3;
                    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar4);
                    local_d0[0] = 0x40b9d36e6b4b0fc;
                    FUN__text__001ac1fc(lVar6,param_1 + 0x310,&local_98,local_d0);
                    if (local_98 != 0) {
                      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
                      local_98 = 0;
                    }
                    lVar6 = *(long *)(param_1 + 0x10);
                    if (lVar6 != 0) {
                      local_a0 = lVar3;
                      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar4);
                      local_d0[0] = 0x4081736e6b19773;
                      FUN__text__001ac1fc(lVar6,param_1 + 0x388,&local_a0,local_d0);
                      if (local_a0 != 0) {
                        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
                        local_a0 = 0;
                      }
                      lVar6 = *(long *)(param_1 + 0x10);
                      if (lVar6 != 0) {
                        local_a8 = lVar3;
                        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar4);
                        local_d0[0] = 0x346e3ad095d83f89;
                        FUN__text__001ac1fc(lVar6,param_1 + 0x3f8,&local_a8,local_d0);
                        if (local_a8 != 0) {
                          (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
                          local_a8 = 0;
                        }
                        lVar6 = *(long *)(param_1 + 0x10);
                        if (lVar6 != 0) {
                          local_b0 = lVar3;
                          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar4);
                          local_d0[0] = 0x346e39d095d83dd6;
                          FUN__text__001ac1fc(lVar6,param_1 + 0x468,&local_b0,local_d0);
                          if (local_b0 != 0) {
                            (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
                            local_b0 = 0;
                          }
                          goto LAB__text__001c5780;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
  }
LAB__text__001c5780:
  lVar5 = lVar5 + 0x110;
  lVar6 = FUN__text__0012cb14(lVar5,(undefined8 *)(param_1 + 0x48));
  *(undefined1 *)(lVar6 + 0x110) = 0;
  *(undefined8 *)(lVar6 + 0x108) = 0x200000000000000;
  uVar1 = FUN__text__0012cb14(lVar5,(undefined8 *)(param_1 + 0x128));
  FUN__text__005e927c(local_d0,0x86dea0);
  FUN__text__003a1de4(uVar1,local_d0);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  uVar1 = FUN__text__0012cb14(lVar5,param_1 + 0x1a0);
  FUN__text__005e927c(local_d0,0x86dea0);
  FUN__text__003a1de4(uVar1,local_d0);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  FUN__text__001c5878(param_1,0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


