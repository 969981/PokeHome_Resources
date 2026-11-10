/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037D840
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d840; name: FUN_.text__0047d840
 */


void FUN__text__0047d840(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  for (lVar1 = DAT_00ae9e38; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) { // [自动静态注释] 循环/迭代
    fVar2 = *(float *)(lVar1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = *(float *)(lVar1 + 0x74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = *(float *)(lVar1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = *(float *)(lVar1 + 100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar6 = *(float *)(lVar1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = *(float *)(lVar1 + 0x6c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(lVar1 + 0x4c) = fVar2;
    *(float *)(lVar1 + 0x50) = fVar3;
    *(float *)(lVar1 + 0x54) = fVar5;
    *(float *)(lVar1 + 0x58) = fVar4;
    *(float *)(lVar1 + 0x5c) = fVar6;
    *(float *)(lVar1 + 0x3c) = fVar6 * fVar2 - fVar4 * fVar3;
    *(float *)(lVar1 + 0x40) = fVar5 * fVar3 - fVar7 * fVar6;
    *(float *)(lVar1 + 0x44) = fVar7 * fVar4 - fVar5 * fVar2;
    *(float *)(lVar1 + 0x48) = fVar7;
    FUN__text__0044b8a0(&DAT_00aea840,*(undefined8 *)(*(long *)(lVar1 + 8) + 0x58),&uStack_21); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


