/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00591574
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00691574; name: FUN_.text__00691574
 */


void FUN__text__00691574(long param_1,uint param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = param_1 + (ulong)param_3 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(lVar1 + 0x1bac) != param_2) { // [自动静态注释] 条件判断/分支
    nn::fontll::ScalableFontEngine::SetFont // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              ((char *)(*(long *)(param_1 + 0x10) + (ulong)param_3 * 0xb8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::fontll::ScalableFontEngine::SetBoldWeight // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              ((int)*(undefined8 *)(param_1 + 0x10) + param_3 * 0xb8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = *(long *)(param_1 + 0x10) + (ulong)param_3 * 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)param_2) != '\0') { // [自动静态注释] 条件判断/分支
      nn::fontll::ScalableFontEngine::SetOutlineWidth((ushort)lVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = *(long *)(param_1 + 0x10) + (ulong)param_3 * 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    nn::fontll::ScalableFontEngine::SetFlags(lVar2,uVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(uint *)(lVar1 + 0x1bac) = param_2;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


