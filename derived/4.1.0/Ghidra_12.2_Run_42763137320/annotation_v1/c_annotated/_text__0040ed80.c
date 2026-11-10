/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0030ED80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040ed80; name: FUN_.text__0040ed80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0040ed80(float param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float *pfVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((-96.3 <= param_1) && (param_1 <= 0.0)) { // [自动静态注释] 条件判断/分支
    if (param_2 <= *_DAT_008a4608) { // [自动静态注释] 条件判断/分支
      *_DAT_008a4608 = param_2;
      fVar4 = exp2f(param_1 * 0.1660964); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar1 = _DAT_008a4f30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar5 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((-37.0 <= param_1 * 0.05) && (param_1 * 0.05 <= 37.0)) { // [自动静态注释] 条件判断/分支
        uVar3 = (uint)(param_1 * 1393317.6 + 1.0653532e+09); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar5 = (float)(uVar3 & 0x7fffff | 0x3f800000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar5 = (fVar5 * (fVar5 * 0.32518977 + 0.020805772) + 0.65304345) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                (float)(uVar3 & 0xff800000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (fVar4 <= fVar5) { // [自动静态注释] 条件判断/分支
        fVar4 = fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *_DAT_008a4f40 = fVar4;
      *pfVar1 = param_1;
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


