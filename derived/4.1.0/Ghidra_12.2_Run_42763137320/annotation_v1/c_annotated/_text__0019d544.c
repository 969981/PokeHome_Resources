/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009D544
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019d544; name: FUN_.text__0019d544
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0019d544(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_58 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = *(long **)(local_58 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    local_48 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_48 != 0) { // [自动静态注释] 条件判断/分支
      plVar2 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x80,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
        lVar1 = uVar7 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar4;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        plVar2[1] = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar2[2] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar3 = _DAT_008a0e78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
        plVar2[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar2[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)(plVar2 + 9) = 0;
        plVar2[3] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar2 = lVar3 + 0x10;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        puVar5 = *(undefined8 **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(param_1 + 0xe8) = plVar2;
        if (puVar5 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          (**(code **)*puVar5)(puVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(**(long **)(param_1 + 0xf0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    (*(long **)(param_1 + 0xf0),puVar5,*(undefined8 *)(param_1 + 0xf8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     *(undefined8 *)(param_1 + 0x100));
        } // [自动静态注释] 作用域/控制流边界
        *(long **)(param_1 + 0xf0) = plVar4;
        *(undefined8 *)(param_1 + 0xf8) = 0x80;
        *(undefined8 *)(param_1 + 0x100) = 8;
        plVar2 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x90,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
          *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar4;
          *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
          plVar2[1] = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar2[2] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar3 = _DAT_008a0e80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined1 *)(plVar2 + 4) = 0;
          *(undefined1 *)((long)plVar2 + 0x24) = 0;
          plVar2[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar2[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar2[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)((long)plVar2 + 0x4e) = 0;
          plVar2[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar2[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined1 *)(plVar2 + 0xb) = 0;
          *(undefined1 *)((long)plVar2 + 0x5c) = 0;
          plVar2[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar2[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar2[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar2[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar2[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)((long)plVar2 + 0x86) = 0;
          plVar2[3] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *plVar2 = lVar3 + 0x10;
          *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
          puVar5 = *(undefined8 **)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long **)(param_1 + 0x108) = plVar2;
          if (puVar5 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            (**(code **)*puVar5)(puVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (**(code **)(**(long **)(param_1 + 0x110) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (*(long **)(param_1 + 0x110),puVar5,*(undefined8 *)(param_1 + 0x118), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       *(undefined8 *)(param_1 + 0x120));
          } // [自动静态注释] 作用域/控制流边界
          *(long **)(param_1 + 0x110) = plVar4;
          *(undefined8 *)(param_1 + 0x118) = 0x90;
          *(undefined8 *)(param_1 + 0x120) = 8;
          puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x1d0,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
            *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar4;
            *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
            puVar5[1] = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined1 *)(puVar5 + 4) = 0;
            *(undefined8 *)((long)puVar5 + 0x24) = 0;
            *(undefined8 *)((long)puVar5 + 0x2c) = 0;
            *(undefined8 *)((long)puVar5 + 0x34) = 0;
            *(undefined8 *)((long)puVar5 + 0x3c) = 0;
            *(undefined8 *)((long)puVar5 + 0x44) = 0;
            *(undefined8 *)((long)puVar5 + 0x4c) = 0;
            *(undefined8 *)((long)puVar5 + 0x54) = 0;
            *(undefined8 *)((long)puVar5 + 0x5c) = 0;
            puVar5[2] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)((long)puVar5 + 100) = 0;
            *(undefined8 *)((long)puVar5 + 0x6a) = 0;
            *(undefined1 *)((long)puVar5 + 0x74) = 0;
            *puVar5 = 0x86daa0;
            *(undefined1 *)(puVar5 + 0x12) = 0;
            puVar5[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)((long)puVar5 + 0x1c2) = 0;
            *(undefined8 *)((long)puVar5 + 0x1bc) = 0;
            *(undefined8 *)((long)puVar5 + 0x1b4) = 0;
            *(undefined8 *)((long)puVar5 + 0x1ac) = 0;
            *(undefined8 *)((long)puVar5 + 0x1a4) = 0;
            *(undefined8 *)((long)puVar5 + 0x19c) = 0;
            puVar5[3] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar5[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar5[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            memset((void *)((long)puVar5 + 0x94),0,0x105); // [自动静态注释] 内存复制、清零或移动
            *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
            puVar6 = *(undefined8 **)(param_1 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 **)(param_1 + 0x128) = puVar5;
            if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
              (**(code **)*puVar6)(puVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (**(code **)(**(long **)(param_1 + 0x130) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (*(long **)(param_1 + 0x130),puVar6,*(undefined8 *)(param_1 + 0x138), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         *(undefined8 *)(param_1 + 0x140));
            } // [自动静态注释] 作用域/控制流边界
            *(long **)(param_1 + 0x130) = plVar4;
            *(undefined8 *)(param_1 + 0x138) = 0x1d0;
            *(undefined8 *)(param_1 + 0x140) = 8;
            plVar2 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x78,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
              *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar4;
              *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
              plVar2[1] = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              plVar2[2] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar1 = _DAT_008a0e90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)((long)plVar2 + 0x44) = 0;
              *(undefined8 *)((long)plVar2 + 0x4c) = 0;
              *(undefined8 *)((long)plVar2 + 0x54) = 0;
              *(undefined8 *)((long)plVar2 + 0x5c) = 0;
              *(undefined8 *)((long)plVar2 + 100) = 0;
              *(undefined8 *)((long)plVar2 + 0x6a) = 0;
              plVar2[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              plVar2[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              plVar2[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined1 *)(plVar2 + 8) = 0;
              *plVar2 = lVar1 + 0x10;
              plVar2[3] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              plVar2[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
              puVar5 = *(undefined8 **)(param_1 + 0x148); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(long **)(param_1 + 0x148) = plVar2;
              if (puVar5 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
                (**(code **)*puVar5)(puVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (**(code **)(**(long **)(param_1 + 0x150) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          (*(long **)(param_1 + 0x150),puVar5,*(undefined8 *)(param_1 + 0x158), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                           *(undefined8 *)(param_1 + 0x160));
              } // [自动静态注释] 作用域/控制流边界
              *(long **)(param_1 + 0x150) = plVar4;
              *(undefined8 *)(param_1 + 0x158) = 0x78;
              *(undefined8 *)(param_1 + 0x160) = 8;
              FUN__text__0019dfd0(&local_78,plVar4,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
              lVar1 = local_78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar3 = *(long *)(param_1 + 0x168); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(long *)(param_1 + 0x168) = lVar1;
              if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
                *(long **)(param_1 + 0x170) = local_70;
                *(undefined8 *)(param_1 + 0x178) = local_68;
                *(undefined8 *)(param_1 + 0x180) = local_60;
                return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
              } // [自动静态注释] 作用域/控制流边界
              (**(code **)(**(long **)(param_1 + 0x170) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (*(long **)(param_1 + 0x170),lVar3,*(undefined8 *)(param_1 + 0x178), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         *(undefined8 *)(param_1 + 0x180));
              lVar1 = local_78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(param_1 + 0x180) = local_60;
              *(long **)(param_1 + 0x170) = local_70;
              *(undefined8 *)(param_1 + 0x178) = local_68;
              if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
                (**(code **)(*local_70 + 0x18))(local_70,lVar1,local_68,local_60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              } // [自动静态注释] 作用域/控制流边界
              return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


