/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00583AFC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683afc; name: FUN_.text__00683afc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__00683afc(byte *param_1,long param_2,byte *param_3,long param_4,int param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = _DAT_008a6610; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_4 != 0) { // [自动静态注释] 条件判断/分支
    bVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      bVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pbVar1 = (byte *)(lVar7 + (ulong)bVar2 * 0x30 + (ulong)(bVar3 >> 4) * 2 + (ulong)(bVar3 >> 4)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar4 = pbVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((bVar4 >> 2 & 1) != 0) { // [自动静态注释] 条件判断/分支
        return -0x20b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if ((bVar4 >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
        puVar10 = *(undefined1 **)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = *(undefined1 *)(lVar7 + (ulong)bVar2 * 0x30 + (ulong)(bVar3 >> 4) * 3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 **)(param_2 + 0x18) = puVar10 + 1;
        *puVar10 = uVar5;
        bVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar9 = (ulong)*pbVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = ((ulong)bVar3 & 0xf) * 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pbVar1 = (byte *)(lVar7 + uVar9 * 0x30 + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = pbVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((bVar4 >> 2 & 1) != 0) { // [自动静态注释] 条件判断/分支
        return -0x20b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if ((bVar4 >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
        puVar10 = *(undefined1 **)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = *(undefined1 *)(lVar7 + uVar9 * 0x30 + lVar6 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 **)(param_2 + 0x18) = puVar10 + 1;
        *puVar10 = uVar5;
      } // [自动静态注释] 作用域/控制流边界
      bVar2 = *pbVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar8 = lVar8 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = param_3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[1] = bVar4 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = bVar2;
    } while (lVar8 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if ((param_5 != 0) && (param_1[1] == 0)) { // [自动静态注释] 条件判断/分支
    param_4 = -0x20b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return param_4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


