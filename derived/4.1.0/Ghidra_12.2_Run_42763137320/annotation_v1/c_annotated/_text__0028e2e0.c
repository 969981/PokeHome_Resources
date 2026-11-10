/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0018E2E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028e2e0; name: FUN_.text__0028e2e0
 */


void FUN__text__0028e2e0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  code *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = (ulong)*(uint *)(*(long *)(param_1 + 0xb0) + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar2 != 0) && (pcVar1 = *(code **)(param_1 + 0xf0), pcVar1 != (code *)0x0)) { // [自动静态注释] 条件判断/分支
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while( true ) { // [自动静态注释] 循环/迭代
      if (pcVar1 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        local_44 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + lVar3 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_48 = (undefined4)lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_28 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xb0) + 0xe0) + lVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (*pcVar1)(param_1 + 0x110,&local_28,&local_44,&local_48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (uVar2 - 1 == lVar3) break; // [自动静态注释] 条件判断/分支
      pcVar1 = *(code **)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = lVar4 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = lVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


