/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00434A80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00534a80; name: FUN_.text__00534a80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00534a80(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_70 [48]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_38 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00521214(*(undefined8 *)(param_1 + 0x30),&lStack_40,auStack_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = FUN__text__0050ac90(param_2,*(undefined8 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                                       (*(long *)(auStack_70 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                 (ulong)*(uint *)(param_1 + 0x38) * 8 + 0x30) + 0xb8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                       )); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  fVar2 = _DAT_008ab250; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = *(long *)(auStack_70 + (ulong)*(uint *)(param_1 + 0x38) * 8 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = *(float *)(lVar1 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = *(float *)(lVar1 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = *(float *)(lVar1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((((((uint)fVar3 ^ 0xffffffff) & 0x7f800000) != 0 && // [自动静态注释] 条件判断/分支
         (((uint)fVar4 ^ 0xffffffff) & 0x7f800000) != 0) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (((uint)fVar5 ^ 0xffffffff) & 0x7f800000) != 0) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
       (((uint)fVar3 ^ 0xffffffff) & 0x7f800000) != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar2 = fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00536c78(_DAT_008ab250,fVar2,auStack_70,*(undefined4 *)(param_1 + 0x3c),_DAT_008ab244, // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined4 *)(param_1 + 0x40));
  FUN__text__0053a4dc(auStack_70,_DAT_008ab24c); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0053a4e4(auStack_70,DAT_008ab25c); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00539a94(auStack_70,*(undefined8 *)(param_1 + 0x30), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)(auStack_70 + (ulong)*(uint *)(param_1 + 0x38) * 8 + 0x30));
  FUN__text__00536cac(auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


