/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002DCC20
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dcc20; name: FUN_.text__003dcc20
 */


undefined1 * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__003dcc20(undefined1 *param_1,undefined1 *param_2,undefined1 param_3,void *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   uint param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_5 < 0x100) { // [自动静态注释] 条件判断/分支
    if (param_5 - 1 < 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x003dcc48 */
                    /* WARNING: Treating indirect jump as call */
      puVar2 = (undefined1 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               (*(code *)(&UNK__text__003dcc54 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         (ulong)*(byte *)((ulong)(param_5 - 1) + 0x73aafc) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return puVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (param_2 < param_1 + (ulong)param_5 + 3) { // [自动静态注释] 条件判断/分支
      return (undefined1 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    param_1[1] = (char)param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = param_1 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = 199;
    param_1[2] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if (param_5 >> 0x10 == 0) { // [自动静态注释] 条件判断/分支
    if (param_2 < param_1 + (ulong)param_5 + 4) { // [自动静态注释] 条件判断/分支
      return (undefined1 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    param_1[3] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = param_1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = 200;
    *(ushort *)(param_1 + 1) = (ushort)(param_5 >> 8) & 0xff | (ushort)((param_5 & 0xff00ff) << 8);
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_2 < param_1 + (ulong)param_5 + 6) { // [自动静态注释] 条件判断/分支
      return (undefined1 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    puVar2 = param_1 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[5] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = 0xc9;
    uVar1 = (param_5 & 0xff00ff00) >> 8 | (param_5 & 0xff00ff) << 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
  } // [自动静态注释] 作用域/控制流边界
  memcpy(puVar2,param_4,(ulong)param_5); // [自动静态注释] 内存复制、清零或移动
  return puVar2 + param_5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


