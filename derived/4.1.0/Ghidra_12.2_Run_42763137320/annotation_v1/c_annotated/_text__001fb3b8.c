/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000FB3B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001fb3b8; name: FUN_.text__001fb3b8
 */


void FUN__text__001fb3b8(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_40 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (3 < param_2) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_1 + (ulong)param_2 * 4 + 0xa8) != 0) { // [自动静态注释] 条件判断/分支
    if (*(uint *)(param_1 + 0xe0) == 0xffffffff) { // [自动静态注释] 条件判断/分支
      FUN__text__0013e288(*(undefined8 *)(param_1 + 0xd0),param_2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(uint *)(param_1 + 0xe0) = param_2;
      FUN__text__0013dbf8(*(undefined8 *)(param_1 + 0xd0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(uint *)(param_1 + 0xe0) != param_2) { // [自动静态注释] 条件判断/分支
      if ((param_2 < 4) && (*(uint *)(param_1 + 0xe0) < 4)) { // [自动静态注释] 条件判断/分支
        lVar2 = param_1 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar4 = (ulong)*(uint *)(param_1 + 0xe0) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1 = (undefined4 *)(lVar2 + (ulong)param_2 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = *(undefined4 *)(lVar2 + lVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar2 + lVar4) = *puVar1;
        *puVar1 = uVar3;
        if (*(int *)(param_1 + 0xe0) != -1) { // [自动静态注释] 条件判断/分支
          FUN__text__0013e288(*(undefined8 *)(param_1 + 0xd0),*(int *)(param_1 + 0xe0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
        FUN__text__0013dbf8(*(undefined8 *)(param_1 + 0xd0)); // [自动静态注释] 调用尚未恢复正式名称的函数
        local_40[0] = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_38 = *(long *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (local_38 != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(local_38 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        if (DAT_008e2080 != 0) { // [自动静态注释] 条件判断/分支
          local_30 = DAT_008e2080; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_28 = *(long *)(DAT_008e2080 + 0x390); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (local_28 != 0) { // [自动静态注释] 条件判断/分支
            FUN__text__0013f4cc(*(undefined8 *)(param_1 + 0xd8),local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
            if (local_38 != 0) { // [自动静态注释] 条件判断/分支
              (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            FUN__text__0013dbf8(*(undefined8 *)(param_1 + 0xd0)); // [自动静态注释] 调用尚未恢复正式名称的函数
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


