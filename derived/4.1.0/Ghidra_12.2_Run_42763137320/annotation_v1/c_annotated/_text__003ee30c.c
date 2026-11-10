/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002EE30C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ee30c; name: FUN_.text__003ee30c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003ee30c(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x68) == 0) { // [自动静态注释] 条件判断/分支
    uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) == 0x10) goto LAB__text__003ee698; // [自动静态注释] 条件判断/分支
    *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00110090(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (*(long *)(param_1 + 0x60) == 0) { // [自动静态注释] 条件判断/分支
    uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) == 0x10) goto LAB__text__003ee698; // [自动静态注释] 条件判断/分支
    *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00110090(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(param_1 + 0x70) != 0) { // [自动静态注释] 条件判断/分支
      local_50 = 0x1573e9b982bdd24f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_48 = 0x713f23; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40 = 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = FUN__text__003f2d08(*(undefined8 *)(param_1 + 0x1f0), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  -(ulong)(*(long *)(param_1 + 0x68) == 0),&local_50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (local_38 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if ((uVar6 & 1) != 0) { // [自动静态注释] 条件判断/分支
        local_50 = 0xffa497865e79aca2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_48 = 0x7133f3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_40 = 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = FUN__text__003f2c1c(*(undefined8 *)(param_1 + 0x1f0), // [自动静态注释] 调用尚未恢复正式名称的函数
                                    -(ulong)(*(long *)(param_1 + 0x60) == 0),&local_50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (local_38 != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        if ((uVar6 & 1) != 0) { // [自动静态注释] 条件判断/分支
          nn::os::LockMutex((MutexType *)(param_1 + 0x150)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = uRam0000000000724ba8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = _DAT_00724ba0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar2 = uRam0000000000724a08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar1 = _DAT_00724a00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_1 + 0x128) = 0;
          *(undefined8 *)(param_1 + 0x120) = 0;
          *(undefined8 *)(param_1 + 0x138) = uVar2;
          *(undefined8 *)(param_1 + 0x130) = uVar1;
          uVar1 = _DAT_0073b0a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_1 + 0x148) = uVar4;
          *(undefined8 *)(param_1 + 0x140) = uVar3;
          FUN__text__003f2d5c(0,uVar1,_DAT_0073b0b0,*(undefined8 *)(param_1 + 0x1f0), // [自动静态注释] 调用尚未恢复正式名称的函数
                              -(ulong)(*(long *)(param_1 + 0x60) == 0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          nn::os::UnlockMutex((MutexType *)(param_1 + 0x150)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__003ee698: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00110090(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*param_2 + 0xb8))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
  FUN__text__00110090(0); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


