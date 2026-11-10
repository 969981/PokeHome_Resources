/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0021B870
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031b870; name: FUN_.text__0031b870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0031b870(long param_1,char *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *__s_00; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s_01; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined5 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar26; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_a58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_a54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int aiStack_a50 [622]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_8c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_8b; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_8a; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_89; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_87; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_86; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_85; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_84; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_83; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_82; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_81; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_7c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_6c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __s_00 = (undefined1 *)(param_1 + 0x13560a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_84 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_83 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_82 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_81 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __s = &DAT_009cca20 + param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_8c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_8b = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_8a = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_89 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_87 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_86 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_85 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_a60,4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar23 = -0x26e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar24 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a58 = (uint)local_a60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar25 = (ulong)(((uint)local_a60 ^ (uint)local_a60 >> 0x1e) * 0x6c078965) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a54 = (undefined4)lVar25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar26 = aiStack_a50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    iVar1 = iVar24 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar24 = iVar24 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar7 = ((uint)lVar25 ^ (uint)lVar25 >> 0x1e) * 0x6c078965; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar22 = (int)lVar23; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar7 + iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar23 = lVar23 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *piVar26 = iVar22 + iVar7 + 0x270;
    lVar25 = lVar23 + (ulong)((uVar2 ^ uVar2 >> 0x1e) * 0x6c078965) + 0x26f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar26[1] = (int)lVar25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar26 = piVar26 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar23 != 0); // [自动静态注释] 循环/迭代
  local_98 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a60 = 0x3d00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar11 = _DAT_008a2a50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_7c = CONCAT31(local_7c._1_3_,*(undefined1 *)(*_DAT_008a2a50 + (uVar19 & 0xffffffff))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_7c._0_2_ = CONCAT11(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined1)local_7c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_7c._0_3_ = CONCAT12(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined2)local_7c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_7c = CONCAT13(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined3)local_7c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_78 = CONCAT31(local_78._1_3_,*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_78._0_2_ = CONCAT11(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined1)local_78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_78._0_3_ = CONCAT12(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined2)local_78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_78 = CONCAT13(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined3)local_78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_74 = CONCAT31(local_74._1_3_,*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_74._0_2_ = CONCAT11(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined1)local_74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_74._0_3_ = CONCAT12(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined2)local_74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_74 = CONCAT13(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined3)local_74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_70 = CONCAT31(local_70._1_3_,*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_70._0_2_ = CONCAT11(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined1)local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_70._0_3_ = CONCAT12(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined2)local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_70 = CONCAT13(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined3)local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_90 = CONCAT31(local_90._1_3_,*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_90._0_2_ = CONCAT11(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined1)local_90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_90._0_3_ = CONCAT12(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined2)local_90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_90 = CONCAT13(*(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)),(undefined3)local_90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_8c = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_8b = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_8a = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_89 = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_88 = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_87 = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_86 = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_85 = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_84 = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_83 = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_82 = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar19 = FUN__text__001138d0(&local_a60,&local_a58,&local_a60); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_81 = *(undefined1 *)(*plVar11 + (uVar19 & 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  sVar20 = strnlen(param_2,9999999); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __s_01 = (void *)(param_1 + 0x2668da0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(__s_01,0,10000000); // [自动静态注释] 内存复制、清零或移动
  memcpy(__s_01,param_2,sVar20); // [自动静态注释] 内存复制、清零或移动
  memset(__s,0,10000000); // [自动静态注释] 内存复制、清零或移动
  uVar21 = nn::crypto::EncryptAes128Cbc // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (__s,10000000,&local_7c,0x10,&local_90,0x10,__s_01, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      sVar20 + 0xf & 0xfffffffffffffff0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  memset(__s_01,0,10000000); // [自动静态注释] 内存复制、清零或移动
  memset(__s_00,0,10000000); // [自动静态注释] 内存复制、清零或移动
  FUN__text__003d60a8(__s_00,&DAT_00989680,__s,uVar21,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar18 = local_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar17 = local_74; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar16 = local_78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar15 = local_7c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar14 = uStack_84; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = uStack_86; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = local_90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = CONCAT11(uStack_87,local_88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = CONCAT41(local_74,uStack_85); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar21 = CONCAT44(local_78,CONCAT13(uStack_81,CONCAT12(uStack_82,CONCAT11(uStack_83,uStack_84)))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = CONCAT13(uStack_89,CONCAT12(uStack_8a,CONCAT11(uStack_8b,local_8c))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset((void *)(param_1 + 0x9cca50),0,0x989650); // [自动静态注释] 内存复制、清零或移动
  uVar3 = *__s_00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined1 *)(param_1 + 0x13560a4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(&DAT_009cca29 + param_1) = (int)((ulong)uVar21 >> 8);
  *(short *)(&DAT_009cca2e + param_1) = (short)((uint)uVar16 >> 8);
  uVar5 = *(undefined1 *)(param_1 + 0x13560a9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *__s = uVar3;
  uVar6 = *(undefined2 *)(param_1 + 0x13560a1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (&DAT_009cca2d)[param_1] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined1 *)(param_1 + 0x13560a3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(&DAT_009cca21 + param_1) = uVar15;
  (&DAT_009cca3c)[param_1] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (&DAT_009cca25)[param_1] = uVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (&DAT_009cca30)[param_1] = (char)((uint)uVar16 >> 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(&DAT_009cca31 + param_1) = uVar9;
  *(undefined2 *)(&DAT_009cca26 + param_1) = uVar6;
  (&DAT_009cca28)[param_1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (&DAT_009cca33)[param_1] = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(&DAT_009cca34 + param_1) = *(undefined2 *)(param_1 + 0x13560a5);
  *(int *)(&DAT_009cca36 + param_1) = (int)uVar10;
  *(undefined2 *)(&DAT_009cca3a + param_1) = *(undefined2 *)(param_1 + 0x13560a7);
  (&DAT_009cca3d)[param_1] = (char)((uint)uVar17 >> 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(&DAT_009cca3e + param_1) = uVar8;
  (&DAT_009cca44)[param_1] = *(undefined1 *)(param_1 + 0x13560ac); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(&DAT_009cca42 + param_1) = *(undefined2 *)(param_1 + 0x13560aa);
  *(undefined4 *)(&DAT_009cca45 + param_1) = uVar18;
  (&DAT_009cca4b)[param_1] = *(undefined1 *)(param_1 + 0x13560af); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(&DAT_009cca49 + param_1) = *(undefined2 *)(param_1 + 0x13560ad);
  *(undefined4 *)(&DAT_009cca4c + param_1) = uVar12;
  sVar20 = strnlen((char *)(param_1 + 0x13560b0),9999999); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memcpy((void *)(param_1 + 0x9cca50),(char *)(param_1 + 0x13560b0),(long)(int)sVar20); // [自动静态注释] 内存复制、清零或移动
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


