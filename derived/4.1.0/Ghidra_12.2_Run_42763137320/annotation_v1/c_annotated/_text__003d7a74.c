/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D7A74
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7a74; name: FUN_.text__003d7a74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__003d7a74(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    return 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  pbVar3 = *(byte **)(lVar4 + 0x208); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pbVar3 == *(byte **)(lVar4 + 0x210)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_1 + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pbVar3 = *(byte **)(lVar4 + 0x208); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pbVar3 == *(byte **)(lVar4 + 0x210)) { // [自动静态注释] 条件判断/分支
      return 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  bVar1 = *pbVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (-1 < (char)bVar1) { // [自动静态注释] 条件判断/分支
    return (uint)bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(uint *)(lVar4 + 0x200) != 0xffffffff) { // [自动静态注释] 条件判断/分支
    return *(uint *)(lVar4 + 0x200); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  bVar1 = *(byte *)(_DAT_00885000 + (ulong)(uint)bVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(lVar4 + 0x218) = (uint)bVar1;
  if (bVar1 == 4) { // [自动静态注释] 条件判断/分支
    uVar2 = (*pbVar3 & 7) << 0x12 | (pbVar3[1] & 0x3f) << 0xc | (pbVar3[2] & 0x3f) << 6 | // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            pbVar3[3] & 0x3f; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(uint *)(lVar4 + 0x200) = uVar2;
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (bVar1 == 3) { // [自动静态注释] 条件判断/分支
    uVar2 = (*pbVar3 & 0xf) << 0xc | (pbVar3[1] & 0x3f) << 6 | pbVar3[2] & 0x3f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(lVar4 + 0x200) = uVar2;
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = (*pbVar3 & 0x1f) << 6 | pbVar3[1] & 0x3f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(lVar4 + 0x200) = uVar2;
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


