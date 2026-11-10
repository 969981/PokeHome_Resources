/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009D9D8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019d9d8; name: FUN_.text__0019d9d8
 */


void FUN__text__0019d9d8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    local_28 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_28 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0019e200(&local_58,*(undefined8 *)(local_38 + 8),&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar2 = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_58 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = *(undefined8 **)(param_1 + 0x188); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 **)(param_1 + 0x188) = puVar2;
      if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        *(long **)(param_1 + 400) = local_50;
        *(undefined8 *)(param_1 + 0x198) = local_48;
        *(undefined8 *)(param_1 + 0x1a0) = local_40;
        FUN__text__001c8740(*(undefined8 *)(param_1 + 0x188)); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(**(long **)(param_1 + 400) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 400),puVar3,*(undefined8 *)(param_1 + 0x198), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x1a0));
      puVar2 = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_58 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1a0) = local_40;
      *(long **)(param_1 + 400) = local_50;
      *(undefined8 *)(param_1 + 0x198) = local_48;
      if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(*local_50 + 0x18))(local_50,puVar2,local_48,local_40); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__001c8740(*(undefined8 *)(param_1 + 0x188)); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


