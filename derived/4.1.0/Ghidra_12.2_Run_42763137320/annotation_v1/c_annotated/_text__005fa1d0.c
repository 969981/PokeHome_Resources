/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004FA1D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fa1d0; name: FUN_.text__005fa1d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005fa1d0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar6 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar11 = *(long *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar13 = *(long *)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar5 = *_DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebf00(&local_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006eddd4(*(long *)(lVar11 + 0x58) + (long)*piVar6 * 0x168,0x123); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006eddfc(*(long *)(lVar11 + 0x58) + (long)*piVar6 * 0x168,0x123); // [自动静态注释] 调用尚未恢复正式名称的函数
  piVar12 = *(int **)(param_1 + 0x150); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar3 = *(int **)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (piVar12 != piVar3) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      iVar1 = *piVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = piVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar7 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0x140)); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar4 = piVar12[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar8 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0x140)); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar9 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0x140)); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_90 = CONCAT44(local_90._4_4_,(iVar1 + iVar7 * iVar2 + iVar8 * iVar4 * iVar9) * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_88 = CONCAT44(*piVar12,(undefined4)uStack_88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_80 = CONCAT44(local_80._4_4_,piVar12[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_78 = *(undefined8 *)(piVar12 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68 = CONCAT44(local_68._4_4_,piVar12[4]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar10 = FUN__text__005a78b8(*(undefined8 *)(param_1 + 0x140)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006ed69c(*(long *)(lVar11 + 0x58) + (long)*piVar6 * 0x168, // [自动静态注释] 调用尚未恢复正式名称的函数
                          lVar13 + (long)iVar5 * 0x70 + 0x58,uVar10,&local_90); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      piVar12 = piVar12 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (piVar12 != piVar3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006eddd4(*(long *)(lVar11 + 0x58) + (long)*piVar6 * 0x168,0x123); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006eddfc(*(long *)(lVar11 + 0x58) + (long)*piVar6 * 0x168,0x123); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


