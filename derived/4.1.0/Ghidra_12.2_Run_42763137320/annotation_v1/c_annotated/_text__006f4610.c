/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005F4610
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f4610; name: FUN_.text__006f4610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f4610(long *param_1,undefined8 param_2,byte *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar11 = *(long *)(param_3 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x10);
  (*(code *)*_DAT_008a7728)(plVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a7758)((long)param_1 + 0xc); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(byte *)((long)param_1 + 0x25) = *param_3;
  if (*param_3 != 0) { // [自动静态注释] 条件判断/分支
    uVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(ushort *)(param_3 + 2) & 4) != 0) { // [自动静态注释] 条件判断/分支
        uVar3 = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pbVar2 = (byte *)(lVar11 + uVar3 * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*DAT_00c607c0)(plVar1,uVar10 & 0xffffffff,*pbVar2 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (*(code *)*_DAT_008a76b0)(lVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (*(code *)*_DAT_008a76b8)(lVar9,uVar10 & 0xffffffff); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = FUN__text__006f2310(pbVar2[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar6 = FUN__text__006f2310(pbVar2[2]); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar7 = FUN__text__006f2310(pbVar2[4]); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar8 = FUN__text__006f2310(pbVar2[5]); // [自动静态注释] 调用尚未恢复正式名称的函数
      (*(code *)*_DAT_008a76c0)(lVar9,uVar5,uVar6,uVar7,uVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = FUN__text__006f2300(pbVar2[3]); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar6 = FUN__text__006f2300(pbVar2[6]); // [自动静态注释] 调用尚未恢复正式名称的函数
      (*(code *)*_DAT_008a76c8)(lVar9,uVar5,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar4 = pbVar2[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*DAT_00c607f8)((long)param_1 + 0xc,uVar10 & 0xffffffff,bVar4 & 1,bVar4 >> 1 & 1, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      bVar4 >> 2 & 1,bVar4 >> 3 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar10 = uVar10 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar9 = lVar9 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar10 < *param_3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if ((*(ushort *)(param_3 + 2) >> 3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar5 = FUN__text__006f2320(param_3[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
    (*(code *)*_DAT_008a7738)(plVar1,uVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


