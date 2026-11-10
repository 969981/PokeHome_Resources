/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00562B8C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00662b8c; name: FUN_.text__00662b8c
 */


void FUN__text__00662b8c(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(param_1 + 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*(int *)(param_1 + 0xef0) != *(int *)(param_1 + 0x1540)) || // [自动静态注释] 条件判断/分支
      (((uint)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x34) & 1) != // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (*(ushort *)(param_1 + 0x15a4) >> 0xc & 1))) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
     (*(long *)(param_1 + 0xee8) != *(long *)(param_1 + 0x1538))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00663e0c(param_1,&local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = FUN__text__006865fc(param_2,0,*(undefined4 *)(lVar2 + 0x218),&local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0067c120(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


