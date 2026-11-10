/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000D4490
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d4490; name: FUN_.text__001d4490
 */


bool FUN__text__001d4490(long param_1,undefined1 *param_2,uint *param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_78 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_62; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar10 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar10 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  bVar5 = (param_4 & 1) == 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5) { // [自动静态注释] 条件判断/分支
    lVar2 = 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = param_1 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5) { // [自动静态注释] 条件判断/分支
    lVar1 = param_1 + 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar7 = FUN__text__00195844(*(undefined8 *)(lVar10 + 0x10),*(undefined4 *)(param_1 + lVar2)); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar3 = *(int *)(lVar7 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
    bVar5 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = lVar1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar11 = (undefined2 *)((ulong)local_78 | 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar12 = *(undefined4 *)(param_1 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = FUN__text__00191358(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_78[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_70 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_6c = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001d476c; // [自动静态注释] 条件判断/分支
      uVar12 = *(undefined4 *)(param_1 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = FUN__text__00191358(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_78[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_70 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_6c = lVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = lVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) { // [自动静态注释] 条件判断/分支
LAB__text__001d4764: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar7 = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__001d476c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *param_2 = 0;
        *(undefined2 *)(param_2 + 1) = local_64;
        *(undefined4 *)(param_2 + 4) = uVar12;
        *(undefined4 *)(param_2 + 8) = uVar6;
        *(long *)(param_2 + 0xc) = lVar7;
        param_2[3] = local_62; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        return bVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar12 = *(undefined4 *)(param_1 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = FUN__text__00191358(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_78[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_70 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_6c = lVar7 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = lVar7 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001d4764; // [自动静态注释] 条件判断/分支
      uVar12 = *(undefined4 *)(param_1 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = FUN__text__00191358(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_78[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_70 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_6c = lVar7 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = lVar7 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001d4764; // [自动静态注释] 条件判断/分支
      uVar12 = *(undefined4 *)(param_1 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = FUN__text__00191358(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_78[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_70 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_6c = lVar7 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = lVar7 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001d4764; // [自动静态注释] 条件判断/分支
      uVar12 = *(undefined4 *)(param_1 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = FUN__text__00191358(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_78[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_70 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_6c = lVar7 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = lVar7 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001d4764; // [自动静态注释] 条件判断/分支
      lVar7 = lVar7 + 0x100000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar5 = uVar9 < 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = uVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar9 != 5); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return bVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


