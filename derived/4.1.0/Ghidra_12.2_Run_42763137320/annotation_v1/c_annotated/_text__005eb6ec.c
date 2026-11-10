/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004EB6EC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005eb6ec; name: FUN_.text__005eb6ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__005eb6ec(undefined8 *param_1,undefined8 param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  thunk_FUN__text__005cf500(&local_38,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40 = *(undefined8 *)(local_38 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = local_40;
  local_28 = (undefined1 *)&local_40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__005ed6f0(param_3 + 0x6c0,&local_40,_DAT_008a01d8,&local_28,&uStack_29); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *(long *)(lVar2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar2 + 0x18) = lVar1;
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


