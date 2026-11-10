/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004DB3EC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005db3ec; name: FUN_.text__005db3ec
 */


undefined8 FUN__text__005db3ec(undefined8 param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005db4c0(&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    if (local_28 != '\0') { // [自动静态注释] 条件判断/分支
      if (*(long *)(lVar1 + 0x48) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x48) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(lVar1 + 0x48) = 0;
      } // [自动静态注释] 作用域/控制流边界
      if ((*(long *)(lVar1 + 0x28) != 0) && (*(long *)(lVar1 + 0x10) != 0)) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x10) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0xcbf29ce484222645;
      *(undefined8 *)(lVar1 + 0x20) = 0x70f683;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      if (*(long *)(lVar1 + 0x30) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x30) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined4 *)(lVar1 + 0x38) = 0;
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*(long *)*local_30 + 0x18))((long *)*local_30,lVar1,0x50,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


