/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B9D34
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b9d34; name: FUN_.text__006b9d34
 */


void FUN__text__006b9d34(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *(long *)(param_1 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(lVar5 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar2 & 3) < (*(byte *)(lVar5 + 0x10) & 3) && // [自动静态注释] 条件判断/分支
      ((uVar2 & 0xff) >> 4 & 3) < (*(byte *)(lVar5 + 0x10) >> 4 & 3)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = ((ulong)uVar2 & 3) * 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006bc14c(*(long *)(lVar5 + 0x18) + lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(uint *)(lVar5 + 0x14) = *(uint *)(lVar5 + 0x14) & 0xfffffffc | *(uint *)(lVar5 + 0x14) + 1 & 3
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = *(uint *)(*(long *)(param_1 + 0xd8) + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(*(long *)(param_1 + 0xd8) + 0x14) =
         uVar2 & 0xffffffc0 | uVar2 & 0xf | (uVar2 & 3) << 4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = *(uint *)(*(long *)(param_1 + 0xd8) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = (undefined4 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             (*(long *)(*(long *)(param_1 + 0xd8) + 0x18) + lVar6 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             ((ulong)uVar2 & 3) * 0x10 + ((ulong)(uVar2 >> 2) & 3) * 0x14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    FUN__text__0069d790(param_1 + 0xf0,*(uint *)(*(long *)(param_1 + 0xd8) + 0x14) & 3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((*(float *)(param_1 + 0x50) == 0.0) && (*(float *)(param_1 + 0x54) == 0.0)) && // [自动静态注释] 条件判断/分支
       ((*(uint *)(*(long *)(param_1 + 0xd8) + 0x14) & 3) == 1)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x18) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x50) = 0;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(*plVar4 + 0x20))(&local_14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar3 = NEON_ucvtf((uint)local_14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(param_1 + 0x50) = uVar3;
        uVar3 = NEON_ucvtf((uint)local_12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(param_1 + 0x54) = uVar3;
      } // [自动静态注释] 作用域/控制流边界
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


