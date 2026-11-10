/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FF2A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ff2a0; name: FUN_.text__003ff2a0
 */


void FUN__text__003ff2a0(undefined8 param_1,undefined8 *param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (undefined8 *)FUN__text__00400f80(7,0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_3 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    uVar2 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined2 *)((long)puVar1 + 0x24) = 0;
    *puVar1 = 0;
    puVar1[1] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)(*param_3 + 0x18) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)*param_3 = *param_2;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


