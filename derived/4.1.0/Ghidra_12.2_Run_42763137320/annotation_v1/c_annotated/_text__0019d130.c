/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009D130
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019d130; name: FUN_.text__0019d130
 */


void FUN__text__0019d130(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_58 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = *(long **)(local_58 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    local_50 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(param_1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
      local_48 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x80,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar6 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
        lVar1 = uVar6 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(lVar1 + *(long *)(uVar6 + 0x98) * 8) = plVar4;
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
        puVar2[1] = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[2] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[3] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar2 = 0x86d9e8;
        puVar2[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
        puVar5 = *(undefined8 **)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 **)(param_1 + 0x48) = puVar2;
        if (puVar5 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          (**(code **)*puVar5)(puVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(**(long **)(param_1 + 0x50) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    (*(long **)(param_1 + 0x50),puVar5,*(undefined8 *)(param_1 + 0x58), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     *(undefined8 *)(param_1 + 0x60));
        } // [自动静态注释] 作用域/控制流边界
        *(long **)(param_1 + 0x50) = plVar4;
        *(undefined8 *)(param_1 + 0x58) = 0x80;
        *(undefined8 *)(param_1 + 0x60) = 8;
        uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x5ba0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long *)(uVar6 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
          *(long **)(lVar1 + *(long *)(uVar6 + 0x98) * 8) = plVar4;
          *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
          FUN__text__001a1dc0(uVar3,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
          puVar2 = *(undefined8 **)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_1 + 0x68) = uVar3;
          if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (**(code **)(**(long **)(param_1 + 0x70) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (*(long **)(param_1 + 0x70),puVar2,*(undefined8 *)(param_1 + 0x78), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       *(undefined8 *)(param_1 + 0x80));
          } // [自动静态注释] 作用域/控制流边界
          *(undefined8 *)(param_1 + 0x80) = 0x10;
          *(long **)(param_1 + 0x70) = plVar4;
          *(undefined8 *)(param_1 + 0x78) = 0x5ba0;
          uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x5ba0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long *)(uVar6 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
            *(long **)(lVar1 + *(long *)(uVar6 + 0x98) * 8) = plVar4;
            *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
            FUN__text__001a1dc0(uVar3,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
            *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
            puVar2 = *(undefined8 **)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)(param_1 + 0x88) = uVar3;
            if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
              (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (**(code **)(**(long **)(param_1 + 0x90) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (*(long **)(param_1 + 0x90),puVar2,*(undefined8 *)(param_1 + 0x98), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         *(undefined8 *)(param_1 + 0xa0));
            } // [自动静态注释] 作用域/控制流边界
            *(long **)(param_1 + 0x90) = plVar4;
            *(undefined8 *)(param_1 + 0x98) = 0x5ba0;
            *(undefined8 *)(param_1 + 0xa0) = 0x10;
            uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x58a0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (*(long *)(uVar6 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
              *(long **)(lVar1 + *(long *)(uVar6 + 0x98) * 8) = plVar4;
              *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
              FUN__text__001a27f0(uVar3,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
              *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
              puVar2 = *(undefined8 **)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(param_1 + 0xa8) = uVar3;
              if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
                (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (**(code **)(**(long **)(param_1 + 0xb0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          (*(long **)(param_1 + 0xb0),puVar2,*(undefined8 *)(param_1 + 0xb8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                           *(undefined8 *)(param_1 + 0xc0));
              } // [自动静态注释] 作用域/控制流边界
              *(undefined8 *)(param_1 + 0xc0) = 0x10;
              *(long **)(param_1 + 0xb0) = plVar4;
              *(undefined8 *)(param_1 + 0xb8) = 0x58a0;
              uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x58a0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (*(long *)(uVar6 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
                *(long **)(lVar1 + *(long *)(uVar6 + 0x98) * 8) = plVar4;
                *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
                FUN__text__001a27f0(uVar3,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
                *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
                puVar2 = *(undefined8 **)(param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(undefined8 *)(param_1 + 200) = uVar3;
                if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
                  (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (**(code **)(**(long **)(param_1 + 0xd0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                            (*(long **)(param_1 + 0xd0),puVar2,*(undefined8 *)(param_1 + 0xd8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                             *(undefined8 *)(param_1 + 0xe0));
                } // [自动静态注释] 作用域/控制流边界
                *(long **)(param_1 + 0xd0) = plVar4;
                *(undefined8 *)(param_1 + 0xd8) = 0x58a0;
                *(undefined8 *)(param_1 + 0xe0) = 0x10;
                FUN__text__001ad0c0(*(undefined8 *)(param_1 + 0x48),param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                FUN__text__001b80f0(*(undefined8 *)(param_1 + 0x68),0, // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined4 *)(param_1 + 0x1b0),param_1,
                                    *(undefined8 *)(param_1 + 0x48));
                FUN__text__001b80f0(*(undefined8 *)(param_1 + 0x88),1, // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined4 *)(param_1 + 0x1b4),param_1,
                                    *(undefined8 *)(param_1 + 0x48));
                FUN__text__001cde80(*(undefined8 *)(param_1 + 0xa8),0, // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined4 *)(param_1 + 0x1b0),param_1,
                                    *(undefined8 *)(param_1 + 0x48));
                FUN__text__001cde80(*(undefined8 *)(param_1 + 200),1, // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined4 *)(param_1 + 0x1b4),param_1,
                                    *(undefined8 *)(param_1 + 0x48));
                FUN__text__001ad460(*(undefined8 *)(param_1 + 0x48)); // [自动静态注释] 调用尚未恢复正式名称的函数
                FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x68),0); // [自动静态注释] 调用尚未恢复正式名称的函数
                FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x88),0); // [自动静态注释] 调用尚未恢复正式名称的函数
                FUN__text__001b1b44(*(undefined8 *)(param_1 + 0xa8),0); // [自动静态注释] 调用尚未恢复正式名称的函数
                FUN__text__001b1b44(*(undefined8 *)(param_1 + 200),0); // [自动静态注释] 调用尚未恢复正式名称的函数
                if (*(long *)(param_1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
                  *(long *)(*(long *)(param_1 + 0x18) + 0x718) = param_1;
                  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                } // [自动静态注释] 作用域/控制流边界
                goto LAB__text__0019d540; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              } // [自动静态注释] 作用域/控制流边界
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0019d540: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


