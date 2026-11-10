/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000FB6F0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001fb6f0; name: FUN_.text__001fb6f0
 */


void FUN__text__001fb6f0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_1d38 [3684]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int aiStack_ed4 [921]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_70 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar10 = DAT_008e2080; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((DAT_008e2080 == 0) || (lVar8 = *(long *)(DAT_008e2080 + 0x70), lVar8 == 0)) || // [自动静态注释] 条件判断/分支
     (lVar11 = *(long *)(DAT_008e2080 + 0x290), lVar11 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar9 = (long *)(lVar11 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar9 + 0x10))(plVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = FUN__text__001933c8(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_70[0] = lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (**(code **)(*plVar9 + 0x10))(plVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001fb528(uVar6,local_70,lVar10 + 0xa4); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*plVar9 + 0x18))(plVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = FUN__text__00306bc4(lVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005fc870(param_1 + 0xf0,uVar6,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x1dbc) = 0;
  *(undefined4 *)(param_1 + 0x2c24) = 0;
  *(undefined4 *)(param_1 + 0x3a8c) = 0;
  *(undefined4 *)(param_1 + 0x48f4) = 0;
  *(undefined4 *)(param_1 + 0x575c) = 0;
  *(undefined4 *)(param_1 + 0x65c4) = 0;
  *(undefined4 *)(param_1 + 0x742c) = 0;
  *(undefined4 *)(param_1 + 0x8294) = 0;
  *(undefined4 *)(param_1 + 0x90fc) = 0;
  *(undefined4 *)(param_1 + 0x9f64) = 0;
  *(undefined4 *)(param_1 + 0xadcc) = 0;
  *(undefined4 *)(param_1 + 0x1f924) = 0;
  *(undefined4 *)(param_1 + 0x2078c) = 0;
  *(undefined4 *)(param_1 + 0x215f4) = 0;
  *(undefined4 *)(param_1 + 0x2245c) = 0;
  *(undefined4 *)(param_1 + 0x232c4) = 0;
  *(undefined4 *)(param_1 + 0xbc34) = 0;
  *(undefined4 *)(param_1 + 0xca9c) = 0;
  *(undefined4 *)(param_1 + 0xd904) = 0;
  *(undefined4 *)(param_1 + 0xe76c) = 0;
  *(undefined4 *)(param_1 + 0xf5d4) = 0;
  *(undefined4 *)(param_1 + 0x1043c) = 0;
  *(undefined4 *)(param_1 + 0x2412c) = 0;
  *(undefined4 *)(param_1 + 0x24f94) = 0;
  *(undefined4 *)(param_1 + 0x25dfc) = 0;
  *(undefined4 *)(param_1 + 0x26c64) = 0;
  *(undefined4 *)(param_1 + 0x27acc) = 0;
  *(undefined4 *)(param_1 + 0x112a4) = 0;
  *(undefined4 *)(param_1 + 0x1210c) = 0;
  *(undefined4 *)(param_1 + 0x12f74) = 0;
  *(undefined4 *)(param_1 + 0x13ddc) = 0;
  *(undefined4 *)(param_1 + 0x14c44) = 0;
  *(undefined4 *)(param_1 + 0x15aac) = 0;
  *(undefined4 *)(param_1 + 0x16914) = 0;
  *(undefined4 *)(param_1 + 0x1777c) = 0;
  *(undefined4 *)(param_1 + 0x185e4) = 0;
  *(undefined4 *)(param_1 + 0x1944c) = 0;
  *(undefined4 *)(param_1 + 0x1a2b4) = 0;
  *(undefined4 *)(param_1 + 0x1b11c) = 0;
  *(undefined4 *)(param_1 + 0x1bf84) = 0;
  *(undefined4 *)(param_1 + 0x1cdec) = 0;
  *(undefined4 *)(param_1 + 0x1dc54) = 0;
  *(undefined4 *)(param_1 + 0x1eabc) = 0;
  *(undefined4 *)(param_1 + 0x28934) = 0;
  *(undefined4 *)(param_1 + 0x2979c) = 0;
  *(undefined4 *)(param_1 + 0x2a604) = 0;
  *(undefined4 *)(param_1 + 0x2b46c) = 0;
  *(undefined4 *)(param_1 + 0x2c2d4) = 0;
  lVar10 = *(long *)(lVar10 + 600); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar10 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar10 + 0x3b8) + 0x10))(lVar10 + 0x3b8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = *(uint *)(param_1 + 0xf54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
    uVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (uVar13 < 0x399) { // [自动静态注释] 条件判断/分支
        iVar5 = *(int *)(param_1 + 0xf0 + uVar13 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar5 != *(int *)(param_1 + 0xa8)) { // [自动静态注释] 条件判断/分支
LAB__text__001fb940: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (((iVar5 != *(int *)(param_1 + 0xac)) && (iVar5 != *(int *)(param_1 + 0xb0))) && // [自动静态注释] 条件判断/分支
             (iVar5 != *(int *)(param_1 + 0xb4))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar7 = FUN__text__003d02dc(lVar10,iVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
            lVar8 = param_1 + (uVar7 & 0xffffffff) * 0xe68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar3 = *(uint *)(lVar8 + 0x1dbc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(uint *)(lVar8 + 0x1dbc) = uVar3 + 1;
            *(int *)(lVar8 + (ulong)uVar3 * 4 + 0xf58) = iVar5;
            uVar3 = *(uint *)(param_1 + 0x2c2d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(uint *)(param_1 + 0x2c2d4) = uVar3 + 1;
            *(int *)(param_1 + 0x2b470 + (ulong)uVar3 * 4) = iVar5;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(int *)(param_1 + 0xa8) != 0) goto LAB__text__001fb940; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      uVar13 = uVar13 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar2 != uVar13); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  memset(aiStack_ed4,0,0xe64); // [自动静态注释] 内存复制、清零或移动
  iVar5 = FUN__text__003d02d0(lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar5 != 0) { // [自动静态注释] 条件判断/分支
    iVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar13 = FUN__text__003d02b0(lVar10,iVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
      aiStack_ed4[uVar13 & 0xffffffff] = iVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar12 = iVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (iVar5 != iVar12); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  lVar8 = param_1 + 0xf58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar11 = 0x2f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar2 = *(uint *)(lVar8 + 0xe64); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    memcpy(auStack_1d38,aiStack_ed4,0xe64); // [自动静态注释] 内存复制、清零或移动
    lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
      lVar1 = LZCOUNT((ulong)uVar2) * -2 + 0x7e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__001ff590(lVar8,lVar8 + (ulong)uVar2 * 4,auStack_1d38,lVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar8 = lVar8 + 0xe68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar11 = lVar11 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar11 != 0); // [自动静态注释] 循环/迭代
  FUN__text__001fc3c0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar10 + 0x3b8) + 0x18))(lVar10 + 0x3b8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(*plVar9 + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


